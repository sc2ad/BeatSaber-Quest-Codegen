// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: ChallengeViewerFilter
  struct ChallengeViewerFilter;
  // Forward declaring type: ChallengeVisibility
  struct ChallengeVisibility;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ChallengeOptions
  class ChallengeOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::ChallengeOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeOptions*, "Oculus.Platform", "ChallengeOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ChallengeOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class ChallengeOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x1A006F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::ChallengeOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeOptions*, creationType>()));
    }
    // public System.Void SetDescription(System.String value)
    // Offset: 0x1A00770
    void SetDescription(::StringW value);
    // public System.Void SetEndDate(System.DateTime value)
    // Offset: 0x1A007EC
    void SetEndDate(::System::DateTime value);
    // public System.Void SetIncludeActiveChallenges(System.Boolean value)
    // Offset: 0x1A00868
    void SetIncludeActiveChallenges(bool value);
    // public System.Void SetIncludeFutureChallenges(System.Boolean value)
    // Offset: 0x1A008E4
    void SetIncludeFutureChallenges(bool value);
    // public System.Void SetIncludePastChallenges(System.Boolean value)
    // Offset: 0x1A00960
    void SetIncludePastChallenges(bool value);
    // public System.Void SetLeaderboardName(System.String value)
    // Offset: 0x1A009DC
    void SetLeaderboardName(::StringW value);
    // public System.Void SetStartDate(System.DateTime value)
    // Offset: 0x1A00A58
    void SetStartDate(::System::DateTime value);
    // public System.Void SetTitle(System.String value)
    // Offset: 0x1A00AD4
    void SetTitle(::StringW value);
    // public System.Void SetViewerFilter(Oculus.Platform.ChallengeViewerFilter value)
    // Offset: 0x1A00B50
    void SetViewerFilter(::Oculus::Platform::ChallengeViewerFilter value);
    // public System.Void SetVisibility(Oculus.Platform.ChallengeVisibility value)
    // Offset: 0x1A00BCC
    void SetVisibility(::Oculus::Platform::ChallengeVisibility value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.ChallengeOptions options)
    // Offset: 0x1A00C48
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x1A00C98
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.ChallengeOptions
  #pragma pack(pop)
  static check_size<sizeof(ChallengeOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_ChallengeOptionsSizeCheck;
  static_assert(sizeof(ChallengeOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetDescription
// Il2CppName: SetDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::StringW)>(&Oculus::Platform::ChallengeOptions::SetDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetEndDate
// Il2CppName: SetEndDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::System::DateTime)>(&Oculus::Platform::ChallengeOptions::SetEndDate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetEndDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetIncludeActiveChallenges
// Il2CppName: SetIncludeActiveChallenges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(bool)>(&Oculus::Platform::ChallengeOptions::SetIncludeActiveChallenges)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetIncludeActiveChallenges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetIncludeFutureChallenges
// Il2CppName: SetIncludeFutureChallenges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(bool)>(&Oculus::Platform::ChallengeOptions::SetIncludeFutureChallenges)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetIncludeFutureChallenges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetIncludePastChallenges
// Il2CppName: SetIncludePastChallenges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(bool)>(&Oculus::Platform::ChallengeOptions::SetIncludePastChallenges)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetIncludePastChallenges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetLeaderboardName
// Il2CppName: SetLeaderboardName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::StringW)>(&Oculus::Platform::ChallengeOptions::SetLeaderboardName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetLeaderboardName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetStartDate
// Il2CppName: SetStartDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::System::DateTime)>(&Oculus::Platform::ChallengeOptions::SetStartDate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetStartDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetTitle
// Il2CppName: SetTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::StringW)>(&Oculus::Platform::ChallengeOptions::SetTitle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetViewerFilter
// Il2CppName: SetViewerFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::Oculus::Platform::ChallengeViewerFilter)>(&Oculus::Platform::ChallengeOptions::SetViewerFilter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ChallengeViewerFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetViewerFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::SetVisibility
// Il2CppName: SetVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)(::Oculus::Platform::ChallengeVisibility)>(&Oculus::Platform::ChallengeOptions::SetVisibility)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ChallengeVisibility")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "SetVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::ChallengeOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::ChallengeOptions::*)()>(&Oculus::Platform::ChallengeOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ChallengeOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
