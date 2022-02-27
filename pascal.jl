function fact(k)
    fact = 1
    for i in 1:k
        fact = fact * i
    end
    return fact
end

function binomial(n, k)
    return fact(n) ÷ (fact(k) * fact(n - k))
end

row = 4

for i in 0:row
    for j in 0:i
        print(binomial(i, j), " ")
    end
    println()
end