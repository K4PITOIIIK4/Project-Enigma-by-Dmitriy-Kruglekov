# -*- coding: utf-8 -*-
from flask import Flask, request, abort
from flask_cors import CORS
import sys, os, getopt
import subprocess

app = Flask(__name__)
CORS(app)

@app.route('/')
def hello_world():
    if request.method == 'GET':
        return run_algoritm(request), 200
    else:
        abort(404)

@app.errorhandler(404)
def page_not_found(error):
    return 'Page not found!', 404


def run_algoritm(request):
    x_number = request.args.get('x_number', default='')
    y_number = request.args.get('y_number', default='')
    z_number = request.args.get('z_number', default='')
    x_rotor = request.args.get('x_rotor', default='')
    y_rotor = request.args.get('y_rotor', default='')
    z_rotor = request.args.get('z_rotor', default='')
    reflector = request.args.get('reflector', default='')
    b_string = request.args.get('b_string', default='')

    dir_path = os.path.dirname(os.path.realpath(__file__))
    script = os.path.join(dir_path, "Project.exe")
    proc = subprocess.Popen([script, x_number, y_number, z_number, x_rotor, y_rotor, z_rotor, reflector, b_string], stdout=subprocess.PIPE, shell=True)
    out, errs = proc.communicate()

    return out


