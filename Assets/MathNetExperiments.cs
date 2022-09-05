using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MathNet.Numerics.LinearAlgebra;
using MathNet.Numerics.LinearAlgebra.Double;


//https://numerics.mathdotnet.com/
public class MathNetExperiments : MonoBehaviour
{
    // Start is called before the first frame update
    void Start() {
        Matrix<double> A = DenseMatrix.OfArray(new double[,] {
            {1,1,1,1},
            {1,2,3,4},
            {4,3,2,1},
            {1,2,3,4},
            {1,2,3,4}
        });
        
        Matrix<double> b = DenseMatrix.OfArray(new double[,] {
            {1,1,1,1},
            {1,2.1,3,4.1},
            {4,3.2,2,1.1},
            {1,2.2,3,4.2},
            {1,2.3,3,4.5}
        });
        Debug.Log((A.Transpose() * A).Inverse() * A.Transpose() * b);
    }
}
