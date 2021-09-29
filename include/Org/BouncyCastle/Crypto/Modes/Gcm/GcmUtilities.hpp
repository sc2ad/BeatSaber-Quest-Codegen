// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class GcmUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GcmUtilities
    GcmUtilities() noexcept {}
    // Get static field: static private readonly System.UInt32[] LOOKUP
    static ::ArrayWrapper<uint> _get_LOOKUP();
    // Set static field: static private readonly System.UInt32[] LOOKUP
    static void _set_LOOKUP(::ArrayWrapper<uint> value);
    // static private System.Void .cctor()
    // Offset: 0x1A92928
    static void _cctor();
    // static private System.UInt32[] GenerateLookup()
    // Offset: 0x1A91E1C
    static ::ArrayWrapper<uint> GenerateLookup();
    // static System.UInt32[] OneAsUints()
    // Offset: 0x1A91F0C
    static ::ArrayWrapper<uint> OneAsUints();
    // static System.Void AsBytes(System.UInt32[] x, System.Byte[] z)
    // Offset: 0x1A91F80
    static void AsBytes(::ArrayWrapper<uint> x, ::ArrayWrapper<uint8_t> z);
    // static System.UInt32[] AsUints(System.Byte[] bs)
    // Offset: 0x1A91F8C
    static ::ArrayWrapper<uint> AsUints(::ArrayWrapper<uint8_t> bs);
    // static System.Void Multiply(System.Byte[] x, System.Byte[] y)
    // Offset: 0x1A91FFC
    static void Multiply(::ArrayWrapper<uint8_t> x, ::ArrayWrapper<uint8_t> y);
    // static System.Void Multiply(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1A92098
    static void Multiply(::ArrayWrapper<uint> x, ::ArrayWrapper<uint> y);
    // static System.Void MultiplyP(System.UInt32[] x)
    // Offset: 0x1A92170
    static void MultiplyP(::ArrayWrapper<uint> x);
    // static System.Void MultiplyP8(System.UInt32[] x)
    // Offset: 0x1A92288
    static void MultiplyP8(::ArrayWrapper<uint> x);
    // static System.UInt32 ShiftRight(System.UInt32[] x)
    // Offset: 0x1A9220C
    static uint ShiftRight(::ArrayWrapper<uint> x);
    // static System.UInt32 ShiftRightN(System.UInt32[] x, System.Int32 n)
    // Offset: 0x1A92344
    static uint ShiftRightN(::ArrayWrapper<uint> x, int n);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y)
    // Offset: 0x1A923E4
    static void Xor(::ArrayWrapper<uint8_t> x, ::ArrayWrapper<uint8_t> y);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff)
    // Offset: 0x1A924DC
    static void Xor(::ArrayWrapper<uint8_t> x, ::ArrayWrapper<uint8_t> y, int yOff);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x1A925F4
    static void Xor(::ArrayWrapper<uint8_t> x, int xOff, ::ArrayWrapper<uint8_t> y, int yOff, ::ArrayWrapper<uint8_t> z, int zOff);
    // static System.Void Xor(System.Byte[] x, System.Byte[] y, System.Int32 yOff, System.Int32 yLen)
    // Offset: 0x1A92790
    static void Xor(::ArrayWrapper<uint8_t> x, ::ArrayWrapper<uint8_t> y, int yOff, int yLen);
    // static System.Void Xor(System.Byte[] x, System.Int32 xOff, System.Byte[] y, System.Int32 yOff, System.Int32 len)
    // Offset: 0x1A92804
    static void Xor(::ArrayWrapper<uint8_t> x, int xOff, ::ArrayWrapper<uint8_t> y, int yOff, int len);
    // static System.Void Xor(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1A92874
    static void Xor(::ArrayWrapper<uint> x, ::ArrayWrapper<uint> y);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*, "Org.BouncyCastle.Crypto.Modes.Gcm", "GcmUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::GenerateLookup
// Il2CppName: GenerateLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<uint> (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::GenerateLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "GenerateLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::OneAsUints
// Il2CppName: OneAsUints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<uint> (*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::OneAsUints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "OneAsUints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsBytes
// Il2CppName: AsBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsBytes)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "AsBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsUints
// Il2CppName: AsUints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<uint> (*)(::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::AsUints)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "AsUints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>, ::ArrayWrapper<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Multiply)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP
// Il2CppName: MultiplyP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "MultiplyP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP8
// Il2CppName: MultiplyP8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::MultiplyP8)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "MultiplyP8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRight
// Il2CppName: ShiftRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayWrapper<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRight)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "ShiftRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRightN
// Il2CppName: ShiftRightN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayWrapper<uint>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::ShiftRightN)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "ShiftRightN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, yOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, int, ::ArrayWrapper<uint8_t>, int, ::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, ::ArrayWrapper<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, yOff, yLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint8_t>, int, ::ArrayWrapper<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* xOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* yOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, xOff, y, yOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayWrapper<uint>, ::ArrayWrapper<uint>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities::Xor)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
