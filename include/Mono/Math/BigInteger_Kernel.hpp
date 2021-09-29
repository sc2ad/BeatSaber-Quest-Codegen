// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger.hpp"
// Completed includes
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger/Mono.Math.Kernel
  // [TokenAttribute] Offset: FFFFFFFF
  class BigInteger::Kernel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Kernel
    Kernel() noexcept {}
    // static public Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1F944F8
    static Mono::Math::BigInteger* Subtract(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1F96730
    static void MinusEq(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1F96850
    static void PlusEq(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger/Mono.Math.Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1F943A8
    static Mono::Math::BigInteger::Sign Compare(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public System.UInt32 SingleByteDivideInPlace(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1F95DE8
    static uint SingleByteDivideInPlace(Mono::Math::BigInteger* n, uint d);
    // static public System.UInt32 DwordMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1F946C0
    static uint DwordMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1F969D8
    static ::ArrayWrapper<Mono::Math::BigInteger*> DwordDivMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1F94770
    static ::ArrayWrapper<Mono::Math::BigInteger*> multiByteDivide(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1F94F3C
    static Mono::Math::BigInteger* LeftShift(Mono::Math::BigInteger* bi, int n);
    // static public Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1F95124
    static Mono::Math::BigInteger* RightShift(Mono::Math::BigInteger* bi, int n);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32 xOffset, System.UInt32 xLen, System.UInt32[] y, System.UInt32 yOffset, System.UInt32 yLen, System.UInt32[] d, System.UInt32 dOffset)
    // Offset: 0x1F94E3C
    static void Multiply(::ArrayWrapper<uint> x, uint xOffset, uint xLen, ::ArrayWrapper<uint> y, uint yOffset, uint yLen, ::ArrayWrapper<uint> d, uint dOffset);
    // static public System.Void MultiplyMod2p32pmod(System.UInt32[] x, System.Int32 xOffset, System.Int32 xLen, System.UInt32[] y, System.Int32 yOffest, System.Int32 yLen, System.UInt32[] d, System.Int32 dOffset, System.Int32 mod)
    // Offset: 0x1F96B84
    static void MultiplyMod2p32pmod(::ArrayWrapper<uint> x, int xOffset, int xLen, ::ArrayWrapper<uint> y, int yOffest, int yLen, ::ArrayWrapper<uint> d, int dOffset, int mod);
    // static public System.UInt32 modInverse(Mono.Math.BigInteger bi, System.UInt32 modulus)
    // Offset: 0x1F96CB4
    static uint modInverse(Mono::Math::BigInteger* bi, uint modulus);
    // static public Mono.Math.BigInteger modInverse(Mono.Math.BigInteger bi, Mono.Math.BigInteger modulus)
    // Offset: 0x1F96044
    static Mono::Math::BigInteger* modInverse(Mono::Math::BigInteger* bi, Mono::Math::BigInteger* modulus);
  }; // Mono.Math.BigInteger/Mono.Math.Kernel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger::Kernel*, "Mono.Math", "BigInteger/Kernel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::Subtract)> {
  static const MethodInfo* get() {
    static auto* big = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* small = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{big, small});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::MinusEq
// Il2CppName: MinusEq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::MinusEq)> {
  static const MethodInfo* get() {
    static auto* big = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* small = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "MinusEq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{big, small});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::PlusEq
// Il2CppName: PlusEq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::PlusEq)> {
  static const MethodInfo* get() {
    static auto* bi1 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* bi2 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "PlusEq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi1, bi2});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger::Sign (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::Compare)> {
  static const MethodInfo* get() {
    static auto* bi1 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* bi2 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi1, bi2});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::SingleByteDivideInPlace
// Il2CppName: SingleByteDivideInPlace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(Mono::Math::BigInteger*, uint)>(&Mono::Math::BigInteger::Kernel::SingleByteDivideInPlace)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "SingleByteDivideInPlace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, d});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::DwordMod
// Il2CppName: DwordMod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(Mono::Math::BigInteger*, uint)>(&Mono::Math::BigInteger::Kernel::DwordMod)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "DwordMod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, d});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::DwordDivMod
// Il2CppName: DwordDivMod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<Mono::Math::BigInteger*> (*)(Mono::Math::BigInteger*, uint)>(&Mono::Math::BigInteger::Kernel::DwordDivMod)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "DwordDivMod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, d});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::multiByteDivide
// Il2CppName: multiByteDivide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<Mono::Math::BigInteger*> (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::multiByteDivide)> {
  static const MethodInfo* get() {
    static auto* bi1 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* bi2 = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "multiByteDivide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi1, bi2});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::LeftShift
// Il2CppName: LeftShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(Mono::Math::BigInteger*, int)>(&Mono::Math::BigInteger::Kernel::LeftShift)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "LeftShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, n});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::RightShift
// Il2CppName: RightShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(Mono::Math::BigInteger*, int)>(&Mono::Math::BigInteger::Kernel::RightShift)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "RightShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, n});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>, uint, uint, ::ArrayWrapper<uint>, uint, uint, ::ArrayWrapper<uint>, uint)>(&Mono::Math::BigInteger::Kernel::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOffset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* xLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* yOffset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* yLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* dOffset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOffset, xLen, y, yOffset, yLen, d, dOffset});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::MultiplyMod2p32pmod
// Il2CppName: MultiplyMod2p32pmod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>, int, int, ::ArrayWrapper<uint>, int, int, ::ArrayWrapper<uint>, int, int)>(&Mono::Math::BigInteger::Kernel::MultiplyMod2p32pmod)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* xOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* xLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* yOffest = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* dOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mod = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "MultiplyMod2p32pmod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::modInverse
// Il2CppName: modInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(Mono::Math::BigInteger*, uint)>(&Mono::Math::BigInteger::Kernel::modInverse)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* modulus = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "modInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, modulus});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger::Kernel::modInverse
// Il2CppName: modInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Math::BigInteger* (*)(Mono::Math::BigInteger*, Mono::Math::BigInteger*)>(&Mono::Math::BigInteger::Kernel::modInverse)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* modulus = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger::Kernel*), "modInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, modulus});
  }
};
