// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle
#include "System/Globalization/TimeSpanParse_TimeSpanThrowStyle.hpp"
// Including type: System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind
#include "System/Globalization/TimeSpanParse_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::TimeSpanResult/*, public ::System::ValueType*/ {
    public:
    public:
    // System.TimeSpan parsedTimeSpan
    // Size: 0x8
    // Offset: 0x0
    ::System::TimeSpan parsedTimeSpan;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle throwStyle
    // Size: 0x4
    // Offset: 0x8
    ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle throwStyle;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle) == 0x4);
    // System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind m_failure
    // Size: 0x4
    // Offset: 0xC
    ::System::Globalization::TimeSpanParse::ParseFailureKind m_failure;
    // Field size check
    static_assert(sizeof(::System::Globalization::TimeSpanParse::ParseFailureKind) == 0x4);
    // System.String m_failureMessageID
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_failureMessageID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object m_failureMessageFormatArgument
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_failureMessageFormatArgument;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String m_failureArgumentName
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_failureArgumentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: TimeSpanResult
    constexpr TimeSpanResult(::System::TimeSpan parsedTimeSpan_ = {}, ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle throwStyle_ = {}, ::System::Globalization::TimeSpanParse::ParseFailureKind m_failure_ = {}, ::StringW m_failureMessageID_ = {}, ::Il2CppObject* m_failureMessageFormatArgument_ = {}, ::StringW m_failureArgumentName_ = {}) noexcept : parsedTimeSpan{parsedTimeSpan_}, throwStyle{throwStyle_}, m_failure{m_failure_}, m_failureMessageID{m_failureMessageID_}, m_failureMessageFormatArgument{m_failureMessageFormatArgument_}, m_failureArgumentName{m_failureArgumentName_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.TimeSpan parsedTimeSpan
    ::System::TimeSpan& dyn_parsedTimeSpan();
    // Get instance field reference: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle throwStyle
    ::System::Globalization::TimeSpanParse::TimeSpanThrowStyle& dyn_throwStyle();
    // Get instance field reference: System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind m_failure
    ::System::Globalization::TimeSpanParse::ParseFailureKind& dyn_m_failure();
    // Get instance field reference: System.String m_failureMessageID
    ::StringW& dyn_m_failureMessageID();
    // Get instance field reference: System.Object m_failureMessageFormatArgument
    ::Il2CppObject*& dyn_m_failureMessageFormatArgument();
    // Get instance field reference: System.String m_failureArgumentName
    ::StringW& dyn_m_failureArgumentName();
    // System.Void Init(System.Globalization.TimeSpanParse/System.Globalization.TimeSpanThrowStyle canThrow)
    // Offset: 0x20FCF14
    void Init(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle canThrow);
    // System.Void SetFailure(System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind failure, System.String failureMessageID)
    // Offset: 0x20FD33C
    void SetFailure(::System::Globalization::TimeSpanParse::ParseFailureKind failure, ::StringW failureMessageID);
    // System.Void SetFailure(System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0x21013AC
    void SetFailure(::System::Globalization::TimeSpanParse::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Void SetFailure(System.Globalization.TimeSpanParse/System.Globalization.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument, System.String failureArgumentName)
    // Offset: 0x20FD2B0
    void SetFailure(::System::Globalization::TimeSpanParse::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument, ::StringW failureArgumentName);
    // System.Exception GetTimeSpanParseException()
    // Offset: 0x20FD10C
    ::System::Exception* GetTimeSpanParseException();
  }; // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanResult
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::TimeSpanResult), 32 + sizeof(::StringW)> __System_Globalization_TimeSpanParse_TimeSpanResultSizeCheck;
  static_assert(sizeof(TimeSpanParse::TimeSpanResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanResult::*)(::System::Globalization::TimeSpanParse::TimeSpanThrowStyle)>(&System::Globalization::TimeSpanParse::TimeSpanResult::Init)> {
  static const MethodInfo* get() {
    static auto* canThrow = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/TimeSpanThrowStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanResult), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canThrow});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanResult::*)(::System::Globalization::TimeSpanParse::ParseFailureKind, ::StringW)>(&System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanResult::*)(::System::Globalization::TimeSpanParse::ParseFailureKind, ::StringW, ::Il2CppObject*)>(&System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanResult::*)(::System::Globalization::TimeSpanParse::ParseFailureKind, ::StringW, ::Il2CppObject*, ::StringW)>(&System::Globalization::TimeSpanParse::TimeSpanResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanParse/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* failureArgumentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument, failureArgumentName});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanResult::GetTimeSpanParseException
// Il2CppName: GetTimeSpanParseException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Globalization::TimeSpanParse::TimeSpanResult::*)()>(&System::Globalization::TimeSpanParse::TimeSpanResult::GetTimeSpanParseException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanResult), "GetTimeSpanParseException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
