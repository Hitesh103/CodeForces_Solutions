namespace Solution {
    open Microsoft.Quantum.Primitive;
    open Microsoft.Quantum.Canon;

    operation Solve (qs : Qubit[]) : ()
    {
        body
        {
            // Apply Hadamard gate to each qubit
            for (q in qs) {
                H(q);
            }
        }
    }
}
