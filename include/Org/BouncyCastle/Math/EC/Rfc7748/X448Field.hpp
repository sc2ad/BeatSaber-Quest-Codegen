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
  // Forward declaring type: X448Field
  class X448Field;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X448Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X448Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X448Field");
// Type namespace: Org.BouncyCastle.Math.EC.Rfc7748
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc7748.X448Field
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: 1214764
  class X448Field : public ::Il2CppObject {
    public:
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x2282D28
    static void Add(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void Carry(System.UInt32[] z)
    // Offset: 0x2282DA8
    static void Carry(::ArrayW<uint> z);
    // static public System.Void CMov(System.Int32 cond, System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x2282F34
    static void CMov(int cond, ::ArrayW<uint> x, int xOff, ::ArrayW<uint> z, int zOff);
    // static public System.Void CNegate(System.Int32 negate, System.UInt32[] z)
    // Offset: 0x2282FC0
    static void CNegate(int negate, ::ArrayW<uint> z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x22833F0
    static void Copy(::ArrayW<uint> x, int xOff, ::ArrayW<uint> z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x2283010
    static ::ArrayW<uint> Create();
    // static public System.Void Encode(System.UInt32[] x, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x228346C
    static void Encode(::ArrayW<uint> x, ::ArrayW<uint8_t> z, int zOff);
    // static private System.Void Encode24(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x22835AC
    static void Encode24(uint n, ::ArrayW<uint8_t> bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x228361C
    static void Encode32(uint n, ::ArrayW<uint8_t> bs, int off);
    // static private System.Void Encode56(System.UInt32[] x, System.Int32 xOff, System.Byte[] bs, System.Int32 off)
    // Offset: 0x2283530
    static void Encode56(::ArrayW<uint> x, int xOff, ::ArrayW<uint8_t> bs, int off);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x22836A8
    static void Inv(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x22842B0
    static int IsZero(::ArrayW<uint> x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32 y, System.UInt32[] z)
    // Offset: 0x2284310
    static void Mul(::ArrayW<uint> x, uint y, ::ArrayW<uint> z);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x2283948
    static void Mul(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void Normalize(System.UInt32[] z)
    // Offset: 0x2284514
    static void Normalize(::ArrayW<uint> z);
    // static public System.Void One(System.UInt32[] z)
    // Offset: 0x22845F8
    static void One(::ArrayW<uint> z);
    // static private System.Void PowPm3d4(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x2283700
    static void PowPm3d4(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static private System.Void Reduce(System.UInt32[] z, System.Int32 x)
    // Offset: 0x2284540
    static void Reduce(::ArrayW<uint> z, int x);
    // static public System.Void Sqr(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x2284654
    static void Sqr(::ArrayW<uint> x, ::ArrayW<uint> z);
    // static public System.Void Sqr(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x22838FC
    static void Sqr(::ArrayW<uint> x, int n, ::ArrayW<uint> z);
    // static public System.Void Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x228305C
    static void Sub(::ArrayW<uint> x, ::ArrayW<uint> y, ::ArrayW<uint> z);
    // static public System.Void SubOne(System.UInt32[] z)
    // Offset: 0x2284C10
    static void SubOne(::ArrayW<uint> z);
    // static public System.Void Zero(System.UInt32[] z)
    // Offset: 0x2284C60
    static void Zero(::ArrayW<uint> z);
  }; // Org.BouncyCastle.Math.EC.Rfc7748.X448Field
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Add)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Carry
// Il2CppName: Carry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Carry)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Carry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::CMov
// Il2CppName: CMov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::CMov)> {
  static const MethodInfo* get() {
    static auto* cond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "CMov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cond, x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::CNegate
// Il2CppName: CNegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::CNegate)> {
  static const MethodInfo* get() {
    static auto* negate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "CNegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{negate, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Copy)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (*)()>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode24
// Il2CppName: Encode24
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode24)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Encode24", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode32
// Il2CppName: Encode32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode32)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Encode32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode56
// Il2CppName: Encode56
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Encode56)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Encode56", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Inv
// Il2CppName: Inv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Inv)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Inv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::IsZero)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, uint, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Mul)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Mul)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Normalize)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::One
// Il2CppName: One
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::One)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "One", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::PowPm3d4
// Il2CppName: PowPm3d4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::PowPm3d4)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "PowPm3d4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Reduce)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sqr
// Il2CppName: Sqr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sqr)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Sqr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sqr
// Il2CppName: Sqr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sqr)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Sqr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sub
// Il2CppName: Sub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, ::ArrayW<uint>, ::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Sub)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Sub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::SubOne
// Il2CppName: SubOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::SubOne)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "SubOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Zero
// Il2CppName: Zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&Org::BouncyCastle::Math::EC::Rfc7748::X448Field::Zero)> {
  static const MethodInfo* get() {
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*), "Zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
