pipeline {
  agent any
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        sh '''#!/bin/bash
echo "Hello!"'''
        dockerNode(image: 'ubuntu:18.04') {
          sh 'echo "Hello from container"'
        }

      }
    }
  }
  post {
    always {
      sh 'rm -rf ${WORKSPACE}/*'

    }

  }
}