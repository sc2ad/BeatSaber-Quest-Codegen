// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MathUtils
  class MathUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::MathUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::MathUtils*, "Newtonsoft.Json.Utilities", "MathUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.MathUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EE35C
  class MathUtils : public ::Il2CppObject {
    public:
    // static public System.Int32 IntLength(System.UInt64 i)
    // Offset: 0x2123B9C
    static int IntLength(uint64_t i);
    // static public System.Char IntToHex(System.Int32 n)
    // Offset: 0x2123D64
    static ::Il2CppChar IntToHex(int n);
    // static public System.Boolean ApproxEquals(System.Double d1, System.Double d2)
    // Offset: 0x2123D7C
    static bool ApproxEquals(double d1, double d2);
  }; // Newtonsoft.Json.Utilities.MathUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::MathUtils::IntLength
// Il2CppName: IntLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t)>(&Newtonsoft::Json::Utilities::MathUtils::IntLength)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::MathUtils*), "IntLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::MathUtils::IntToHex
// Il2CppName: IntToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(int)>(&Newtonsoft::Json::Utilities::MathUtils::IntToHex)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::MathUtils*), "IntToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::MathUtils::ApproxEquals
// Il2CppName: ApproxEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double, double)>(&Newtonsoft::Json::Utilities::MathUtils::ApproxEquals)> {
  static const MethodInfo* get() {
    static auto* d1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::MathUtils*), "ApproxEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d1, d2});
  }
};
