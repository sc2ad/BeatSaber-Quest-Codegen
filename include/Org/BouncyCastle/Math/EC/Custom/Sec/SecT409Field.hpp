// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecT409Field
  class SecT409Field;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409Field");
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
  // [TokenAttribute] Offset: FFFFFFFF
  class SecT409Field : public ::Il2CppObject {
    public:
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x2502328
    static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x250249C
    static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x250251C
    static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2502608
    static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x2502728
    static ::ArrayW<uint64_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2502738
    static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2502A50
    static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x2502D20
    static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x2502E58
    static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x25028E4
    static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2502EAC
    static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2502C50
    static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x2503088
    static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x2502C9C
    static void SquareN(::ArrayW<uint64_t> x, int n, ::ArrayW<uint64_t> z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x25030D8
    static uint Trace(::ArrayW<uint64_t> x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x250310C
    static void ImplCompactExt(::ArrayW<uint64_t> zz);
    // static protected System.Void ImplExpand(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x2503244
    static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x2502D70
    static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz);
    // static protected System.Void ImplMulwAcc(System.UInt64[] xs, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x2503338
    static void ImplMulwAcc(::ArrayW<uint64_t> xs, uint64_t y, ::ArrayW<uint64_t> z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x25027CC
    static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddExt
// Il2CppName: AddExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddExt)> {
  static const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* yy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "AddExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, yy, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddOne)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::AddTo)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::HalfTrace)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Invert)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::MultiplyAddToExt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Reduce)> {
  static const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Sqrt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Square)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::SquareAddToExt
// Il2CppName: SquareAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::SquareAddToExt)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "SquareAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, int, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::SquareN)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::Trace)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplCompactExt
// Il2CppName: ImplCompactExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplCompactExt)> {
  static const MethodInfo* get() {
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "ImplCompactExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplExpand
// Il2CppName: ImplExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplExpand)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "ImplExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplMultiply
// Il2CppName: ImplMultiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplMultiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "ImplMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplMulwAcc
// Il2CppName: ImplMulwAcc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, uint64_t, ::ArrayW<uint64_t>, int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplMulwAcc)> {
  static const MethodInfo* get() {
    static auto* xs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "ImplMulwAcc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xs, y, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplSquare
// Il2CppName: ImplSquare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field::ImplSquare)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*), "ImplSquare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
