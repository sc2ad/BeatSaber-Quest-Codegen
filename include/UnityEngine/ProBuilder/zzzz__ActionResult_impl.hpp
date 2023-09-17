#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::____UnityEngine__ProBuilder__ActionResult__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::Success{0};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::Failure{1};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::Canceled{2};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status::NoChange{3};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a2d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status)>(&::UnityEngine::ProBuilder::ActionResult::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a2d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_notification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a2d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_notification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::StringW)>(&::UnityEngine::ProBuilder::ActionResult::set_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a2d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "set_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status, ::StringW)>(&::UnityEngine::ProBuilder::ActionResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29a2da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.op_Implicit_bool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ActionResult)>(&::UnityEngine::ProBuilder::ActionResult::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29a2dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.ToBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::ToBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29a2de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "ToBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.FromBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::UnityEngine::ProBuilder::ActionResult::FromBool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29a2df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "FromBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_Success)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29a2e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_NoSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_NoSelection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29a2f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_NoSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_UserCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_UserCanceled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29a2f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_UserCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::ActionResult::__set__status_k__BackingField(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status>(value));
}
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status ::UnityEngine::ProBuilder::ActionResult::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ActionResult::__set__notification_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::ProBuilder::ActionResult::__get__notification_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status ::UnityEngine::ProBuilder::ActionResult::get_status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ActionResult::set_status(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::UnityEngine::ProBuilder::ActionResult::get_notification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ActionResult::set_notification(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "set_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "status", ty: "::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status", modifiers: "", def_value: None }, CppParam { name: "notification", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::ActionResult::ActionResult(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status status, ::StringW notification)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ActionResult>(status, notification))) {}
 void ::UnityEngine::ProBuilder::ActionResult::_ctor(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status status, ::StringW notification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, status, notification);
}
 bool ::UnityEngine::ProBuilder::ActionResult::op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
 bool ::UnityEngine::ProBuilder::ActionResult::ToBool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "ToBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::ActionResult::FromBool(bool success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "FromBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, success);
}
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::ActionResult::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method);
}
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::ActionResult::get_NoSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_NoSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method);
}
 ::UnityEngine::ProBuilder::ActionResult ::UnityEngine::ProBuilder::ActionResult::get_UserCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult>::get(),
                            "get_UserCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
