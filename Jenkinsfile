pipeline {
  agent any
  stages {
    stage('Build pcn-iptables') {
      steps {
        echo 'Start building pcn-iptables'
        echo 'Allocating workspace'
        ws(dir: 'build-pcn-iptables') {
          echo 'git clone polycube repo'
          dir(path: '~') {
            sh '''rm -rf polycube

git clone https://github.com/polycube-network/polycube.git
cd polycube/src/components/iptables
ls -l
cmake .. -DENABLE_PCN_IPTABLES=ON
make
make install
ls -l'''
          }

          echo 'execution of build'
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