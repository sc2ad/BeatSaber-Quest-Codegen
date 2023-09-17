#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus  ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::Online{0};
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus  ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::MaintenanceUpcoming{1};
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus  ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus::Offline{2};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::*)()>(&::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_language(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_message(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>())) {}
 void ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::__set_localizations(::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage> ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::__get_localizations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::____GlobalNamespace__MultiplayerStatusData__UserMessage()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerStatusData__UserMessage>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__minimumAppVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__minimumAppVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(&::GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__maintenanceStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__maintenanceStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&::GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__userMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__userMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage)>(&::GlobalNamespace::MultiplayerStatusData::set__userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__useGamelift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__useGamelift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set__useGamelift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f1358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__useXPlatformAuth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__useXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__useXPlatformAuth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set__useXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f136c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f1378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_minimumAppVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::MultiplayerStatusData::__get_minimumAppVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_status(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus ::GlobalNamespace::MultiplayerStatusData::__get_status() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_maintenanceStartTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::MultiplayerStatusData::__get_maintenanceStartTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_maintenanceEndTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::MultiplayerStatusData::__get_maintenanceEndTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_userMessage(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage ::GlobalNamespace::MultiplayerStatusData::__get_userMessage() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_useGamelift(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MultiplayerStatusData::__get_useGamelift() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerStatusData::__set_useXPlatformAuth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MultiplayerStatusData::__get_useXPlatformAuth() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t ::GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage ::GlobalNamespace::MultiplayerStatusData::get__userMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerStatusData::set__userMessage(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::MultiplayerStatusData::get__useGamelift()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerStatusData::set__useGamelift(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::MultiplayerStatusData::get__useXPlatformAuth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "get__useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerStatusData::set__useXPlatformAuth(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            "set__useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerStatusData::MultiplayerStatusData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultiplayerStatusData>())) {}
 void ::GlobalNamespace::MultiplayerStatusData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
