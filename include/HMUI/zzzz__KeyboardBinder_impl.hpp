#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::____HMUI__KeyboardBinder__KeyBindingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::____HMUI__KeyboardBinder__KeyBindingType  ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::KeyDown{0};
constexpr ::HMUI::____HMUI__KeyboardBinder__KeyBindingType  ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::KeyUp{1};
constexpr ::HMUI::____HMUI__KeyboardBinder__KeyBindingType  ::HMUI::____HMUI__KeyboardBinder__KeyBindingType::KeyPress{2};
//  Writing Method size for method: ::HMUI::KeyboardBinder.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa6abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.set_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(bool)>(&::HMUI::KeyboardBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fa6ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fa6ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::____HMUI__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fa6b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1fa6d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fa6aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>)>(&::HMUI::KeyboardBinder::AddBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1fa6d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::____HMUI__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>)>(&::HMUI::KeyboardBinder::AddBinding)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1fa6bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ClearBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fa6ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1fa6f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::KeyboardBinder::__set__enabled_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::KeyboardBinder::__get__enabled_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::KeyboardBinder::__set__bindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>>> ::HMUI::KeyboardBinder::__get__bindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HMUI::KeyboardBinder::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::KeyboardBinder::set_enabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::HMUI::KeyboardBinder::KeyboardBinder()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KeyboardBinder>())) {}
 void ::HMUI::KeyboardBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "keycode", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "keyBindingType", ty: "::HMUI::____HMUI__KeyboardBinder__KeyBindingType", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action_1<bool>", modifiers: "", def_value: None }]
 ::HMUI::KeyboardBinder::KeyboardBinder(::UnityEngine::KeyCode keycode, ::HMUI::____HMUI__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool> action)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KeyboardBinder>(keycode, keyBindingType, action))) {}
 void ::HMUI::KeyboardBinder::_ctor(::UnityEngine::KeyCode keycode, ::HMUI::____HMUI__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keycode, keyBindingType, action);
}
// Ctor Parameters [CppParam { name: "bindingData", ty: "::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>", modifiers: "", def_value: None }]
 ::HMUI::KeyboardBinder::KeyboardBinder(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>> bindingData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KeyboardBinder>(bindingData))) {}
 void ::HMUI::KeyboardBinder::_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void ::HMUI::KeyboardBinder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::KeyboardBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::____HMUI__KeyboardBinder__KeyBindingType,::System::Action_1<bool>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void ::HMUI::KeyboardBinder::AddBinding(::UnityEngine::KeyCode keyCode, ::HMUI::____HMUI__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyCode, keyBindingType, action);
}
 void ::HMUI::KeyboardBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::KeyboardBinder::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
