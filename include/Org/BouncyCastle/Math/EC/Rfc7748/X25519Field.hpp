// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc7748
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
  // Forward declaring type: X25519Field
  class X25519Field;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field");
// Type namespace: Org.BouncyCastle.Math.EC.Rfc7748
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
  // [TokenAttribute] Offset: FFFFFFFF
  class X25519Field : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Int32[] RootNegOne
    static ::ArrayW<int> _get_RootNegOne();
    // Set static field: static private readonly System.Int32[] RootNegOne
    static void _set_RootNegOne(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x239CFAC
    static void _cctor();
    // static public System.Void Add(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x239B98C
    static void Add(::ArrayW<int> x, ::ArrayW<int> y, ::ArrayW<int> z);
    // static public System.Void AddOne(System.Int32[] z)
    // Offset: 0x239BA0C
    static void AddOne(::ArrayW<int> z);
    // static public System.Void Apm(System.Int32[] x, System.Int32[] y, System.Int32[] zp, System.Int32[] zm)
    // Offset: 0x239BA44
    static void Apm(::ArrayW<int> x, ::ArrayW<int> y, ::ArrayW<int> zp, ::ArrayW<int> zm);
    // static public System.Void Carry(System.Int32[] z)
    // Offset: 0x239BAE0
    static void Carry(::ArrayW<int> z);
    // static public System.Void CMov(System.Int32 cond, System.Int32[] x, System.Int32 xOff, System.Int32[] z, System.Int32 zOff)
    // Offset: 0x239BBF8
    static void CMov(int cond, ::ArrayW<int> x, int xOff, ::ArrayW<int> z, int zOff);
    // static public System.Void CNegate(System.Int32 negate, System.Int32[] z)
    // Offset: 0x239BC84
    static void CNegate(int negate, ::ArrayW<int> z);
    // static public System.Void Copy(System.Int32[] x, System.Int32 xOff, System.Int32[] z, System.Int32 zOff)
    // Offset: 0x239BCE0
    static void Copy(::ArrayW<int> x, int xOff, ::ArrayW<int> z, int zOff);
    // static public System.Int32[] Create()
    // Offset: 0x239BD5C
    static ::ArrayW<int> Create();
    // static public System.Void CSwap(System.Int32 swap, System.Int32[] a, System.Int32[] b)
    // Offset: 0x239BDA8
    static void CSwap(int swap, ::ArrayW<int> a, ::ArrayW<int> b);
    // static public System.Void Encode(System.Int32[] x, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x239BE34
    static void Encode(::ArrayW<int> x, ::ArrayW<uint8_t> z, int zOff);
    // static private System.Void Encode128(System.Int32[] x, System.Int32 xOff, System.Byte[] bs, System.Int32 off)
    // Offset: 0x239BEC8
    static void Encode128(::ArrayW<int> x, int xOff, ::ArrayW<uint8_t> bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x239C010
    static void Encode32(uint n, ::ArrayW<uint8_t> bs, int off);
    // static public System.Void Inv(System.Int32[] x, System.Int32[] z)
    // Offset: 0x239C09C
    static void Inv(::ArrayW<int> x, ::ArrayW<int> z);
    // static public System.Int32 IsZero(System.Int32[] x)
    // Offset: 0x239C93C
    static int IsZero(::ArrayW<int> x);
    // static public System.Void Mul(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x239C3E0
    static void Mul(::ArrayW<int> x, ::ArrayW<int> y, ::ArrayW<int> z);
    // static public System.Void Normalize(System.Int32[] z)
    // Offset: 0x239C99C
    static void Normalize(::ArrayW<int> z);
    // static public System.Void One(System.Int32[] z)
    // Offset: 0x239CB00
    static void One(::ArrayW<int> z);
    // static private System.Void PowPm5d8(System.Int32[] x, System.Int32[] rx2, System.Int32[] rz)
    // Offset: 0x239C144
    static void PowPm5d8(::ArrayW<int> x, ::ArrayW<int> rx2, ::ArrayW<int> rz);
    // static private System.Void Reduce(System.Int32[] z, System.Int32 x)
    // Offset: 0x239CA38
    static void Reduce(::ArrayW<int> z, int x);
    // static public System.Void Sqr(System.Int32[] x, System.Int32[] z)
    // Offset: 0x239CB5C
    static void Sqr(::ArrayW<int> x, ::ArrayW<int> z);
    // static public System.Void Sqr(System.Int32[] x, System.Int32 n, System.Int32[] z)
    // Offset: 0x239C328
    static void Sqr(::ArrayW<int> x, int n, ::ArrayW<int> z);
    // static public System.Void Sub(System.Int32[] x, System.Int32[] y, System.Int32[] z)
    // Offset: 0x239CEE0
    static void Sub(::ArrayW<int> x, ::ArrayW<int> y, ::ArrayW<int> z);
    // static public System.Void Zero(System.Int32[] z)
    // Offset: 0x239CF60
    static void Zero(::ArrayW<int> z);
  }; // Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::AddOne)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Apm
// Il2CppName: Apm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Apm)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* zp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* zm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Apm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zp, zm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Carry
// Il2CppName: Carry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Carry)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Carry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CMov
// Il2CppName: CMov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<int>, int, ::ArrayW<int>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CMov)> {
  static const MethodInfo* get() {
    static auto* cond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "CMov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cond, x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CNegate
// Il2CppName: CNegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CNegate)> {
  static const MethodInfo* get() {
    static auto* negate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "CNegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{negate, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, int, ::ArrayW<int>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Copy)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)()>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CSwap
// Il2CppName: CSwap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::CSwap)> {
  static const MethodInfo* get() {
    static auto* swap = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "CSwap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swap, a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode128
// Il2CppName: Encode128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode128)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Encode128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode32
// Il2CppName: Encode32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Encode32)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Encode32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Inv
// Il2CppName: Inv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Inv)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Inv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::IsZero)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Mul)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Normalize)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::One
// Il2CppName: One
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::One)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "One", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::PowPm5d8
// Il2CppName: PowPm5d8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::PowPm5d8)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* rx2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* rz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "PowPm5d8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, rx2, rz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Reduce)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr
// Il2CppName: Sqr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Sqr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr
// Il2CppName: Sqr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, int, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sqr)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Sqr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sub
// Il2CppName: Sub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>, ::ArrayW<int>, ::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Sub)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Sub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Zero
// Il2CppName: Zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X25519Field::Zero)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*), "Zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
