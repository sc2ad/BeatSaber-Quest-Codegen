// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Forward declaring type: DateTimeUtilities
  class DateTimeUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*, "Org.BouncyCastle.Utilities.Date", "DateTimeUtilities");
// Type namespace: Org.BouncyCastle.Utilities.Date
namespace Org::BouncyCastle::Utilities::Date {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Date.DateTimeUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeUtilities : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.DateTime UnixEpoch
    static ::System::DateTime _get_UnixEpoch();
    // Set static field: static public readonly System.DateTime UnixEpoch
    static void _set_UnixEpoch(::System::DateTime value);
    // static private System.Void .cctor()
    // Offset: 0x25A538C
    static void _cctor();
    // static public System.Int64 DateTimeToUnixMs(System.DateTime dateTime)
    // Offset: 0x25A51A8
    static int64_t DateTimeToUnixMs(::System::DateTime dateTime);
    // static public System.Int64 CurrentUnixMs()
    // Offset: 0x25A52FC
    static int64_t CurrentUnixMs();
  }; // Org.BouncyCastle.Utilities.Date.DateTimeUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Date::DateTimeUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs
// Il2CppName: DateTimeToUnixMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::DateTime)>(&Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Date::DateTimeUtilities*), "DateTimeToUnixMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs
// Il2CppName: CurrentUnixMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Date::DateTimeUtilities*), "CurrentUnixMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
