#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode  ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode::Always{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode  ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode::IgnoreIfAppNotFocused{1};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput.GetButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput.GetAxisRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput.get_touchCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::get_touchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput.GetTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::*)(int32_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetTouch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput.get_mousePresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::get_mousePresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetButtonDown(::StringW button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, button);
}
 float_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetAxisRaw(::StringW axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                            "GetAxisRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, axis);
}
 int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                            "get_touchCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Touch ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::GetTouch(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                            "GetTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>::get(),
                            "get_mousePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input.GetButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetButtonDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c3dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input.GetAxisRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetAxisRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c3dac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetAxisRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input.get_touchCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3dad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "get_touchCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input.GetTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)(int32_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetTouch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c3dad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input.get_mousePresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3db10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "get_mousePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3c390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput
constexpr  ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::operator ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput() const noexcept {
return ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetButtonDown(::StringW button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, button);
}
 float_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetAxisRaw(::StringW axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetAxisRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, axis);
}
 int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "get_touchCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Touch ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::GetTouch(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "GetTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            "get_mousePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::____UnityEngine__UIElements__DefaultEventSystem__Input()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DefaultEventSystem__Input>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__Input>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput.GetButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3db18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput.GetAxisRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3db20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetAxisRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput.get_touchCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3db28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "get_touchCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput.GetTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)(int32_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetTouch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c3db30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput.get_mousePresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3db44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "get_mousePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3c398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput
constexpr  ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::operator ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput() const noexcept {
return ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetButtonDown(::StringW button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, button);
}
 float_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetAxisRaw(::StringW axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetAxisRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, axis);
}
 int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "get_touchCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Touch ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::GetTouch(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "GetTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            "get_mousePresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::____UnityEngine__UIElements__DefaultEventSystem__NoInput()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DefaultEventSystem__NoInput>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__NoInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3dbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendIMGUIEvents_b__23_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c3dbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendIMGUIEvents_b__23_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c3dc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendIMGUIEvents_b__23_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c3dca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendInputEvents_b__24_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3dd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendInputEvents_b__24_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c3dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._SendInputEvents_b__24_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c3dde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c._ProcessTouchEvents_b__30_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_ProcessTouchEvents_b__30_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c3de44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<ProcessTouchEvents>b__30_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c.__cctor_b__41_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__cctor_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3df10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<.cctor>b__41_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>(value));
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__23_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__23_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__23_1(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__23_1()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__23_2(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__23_2()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__23_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__24_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__24_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__24_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__24_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem,::UnityEngine::UIElements::EventBase>, "<>9__24_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__set___9__30_0(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase>, "<>9__30_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase>>(value));
}
 ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase> ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__get___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase>, "<>9__30_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::____UnityEngine__UIElements__DefaultEventSystem____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DefaultEventSystem____c>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_0(::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_1(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, panelPosition, panelDelta, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendIMGUIEvents_b__23_2(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendIMGUIEvents>b__23_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, panelPosition, panelDelta, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_0(::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_1(::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_SendInputEvents_b__24_2(::UnityEngine::UIElements::DefaultEventSystem self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<SendInputEvents>b__24_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, self);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::_ProcessTouchEvents_b__30_0(::UnityEngine::Vector3 panelPosition, ::UnityEngine::Vector3 panelDelta, ::UnityEngine::Touch _touch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<ProcessTouchEvents>b__30_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(const_cast<void*>(instance), ___internal_method, panelPosition, panelDelta, _touch);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c::__cctor_b__41_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem____c>::get(),
                            "<.cctor>b__41_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_isAppFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3c1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_isAppFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_input
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_input)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c3c1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetDefaultInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2c3c1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetDefaultInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldIgnoreEventsOnAppNotFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c3c3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ShouldIgnoreEventsOnAppNotFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_focusedPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseRuntimePanel (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3c3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_focusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_focusedPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel)>(&::UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c3c3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "set_focusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode)>(&::UnityEngine::UIElements::DefaultEventSystem::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c3c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendIMGUIEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2c3c954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "SendIMGUIEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendInputEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::SendInputEvents)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2c3ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "SendInputEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.UpdateFocusedPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel)>(&::UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c3d444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "UpdateFocusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.MakeTouchEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase (*)(::UnityEngine::Touch, ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c3d4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "MakeTouchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessTouchEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2c3c504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ProcessTouchEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetRawMoveVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2c3d648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetRawMoveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldSendMoveFromInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2c3d18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ShouldSendMoveFromInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetLocalScreenPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Event, ByRef<::System::Nullable_1<int32_t>>)>(&::UnityEngine::UIElements::DefaultEventSystem::GetLocalScreenPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c3d170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetLocalScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c3d900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::DefaultEventSystem::__set_IsEditorRemoteConnected(::System::Func_1<bool> value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>, "IsEditorRemoteConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get>(std::forward<::System::Func_1<bool>>(value));
}
 ::System::Func_1<bool> ::UnityEngine::UIElements::DefaultEventSystem::__get_IsEditorRemoteConnected()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>, "IsEditorRemoteConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get>();
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_Input(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput ::UnityEngine::UIElements::DefaultEventSystem::__get_m_Input() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_HorizontalAxis(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::DefaultEventSystem::__get_m_HorizontalAxis() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_VerticalAxis(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::DefaultEventSystem::__get_m_VerticalAxis() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_SubmitButton(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::DefaultEventSystem::__get_m_SubmitButton() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_CancelButton(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::DefaultEventSystem::__get_m_CancelButton() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_InputActionsPerSecond(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::DefaultEventSystem::__get_m_InputActionsPerSecond() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_RepeatDelay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::DefaultEventSystem::__get_m_RepeatDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_SendingTouchEvents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::DefaultEventSystem::__get_m_SendingTouchEvents() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_Event(::UnityEngine::Event value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Event>(value));
}
constexpr ::UnityEngine::Event ::UnityEngine::UIElements::DefaultEventSystem::__get_m_Event() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseRuntimePanel, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::BaseRuntimePanel>(value));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel ::UnityEngine::UIElements::DefaultEventSystem::__get_m_FocusedPanel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseRuntimePanel, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_ConsecutiveMoveCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::DefaultEventSystem::__get_m_ConsecutiveMoveCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_LastMoveVector(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::DefaultEventSystem::__get_m_LastMoveVector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DefaultEventSystem::__set_m_PrevActionTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::DefaultEventSystem::__get_m_PrevActionTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_isAppFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput ::UnityEngine::UIElements::DefaultEventSystem::get_input()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput ::UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetDefaultInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__IInput, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ShouldIgnoreEventsOnAppNotFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::BaseRuntimePanel ::UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "get_focusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseRuntimePanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "set_focusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param updateMode: ::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode (default: 0)
 void ::UnityEngine::UIElements::DefaultEventSystem::Update(::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode updateMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__DefaultEventSystem__UpdateMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateMode);
}
 void ::UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "SendIMGUIEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::DefaultEventSystem::SendInputEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "SendInputEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TArg>
 void ::UnityEngine::UIElements::DefaultEventSystem::SendFocusBasedEvent(::System::Func_2<TArg,::UnityEngine::UIElements::EventBase> evtFactory, TArg arg)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                        "SendFocusBasedEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TArg,::UnityEngine::UIElements::EventBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evtFactory, arg);
}
/// @param deselectIfNoTarget: bool (default: false)
template<typename TArg>
 void ::UnityEngine::UIElements::DefaultEventSystem::SendPositionBasedEvent(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 delta, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay, ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,TArg,::UnityEngine::UIElements::EventBase> evtFactory, TArg arg, bool deselectIfNoTarget)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                        "SendPositionBasedEvent",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,TArg,::UnityEngine::UIElements::EventBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mousePosition, delta, pointerId, targetDisplay, evtFactory, arg, deselectIfNoTarget);
}
 void ::UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel runtimePanel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "UpdateFocusedPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runtimePanel);
}
 ::UnityEngine::UIElements::EventBase ::UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "MakeTouchEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase, false>(nullptr, ___internal_method, touch, modifiers);
}
 bool ::UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ProcessTouchEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetRawMoveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "ShouldSendMoveFromInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::UnityEngine::UIElements::DefaultEventSystem::GetLocalScreenPosition(::UnityEngine::Event evt, ByRef<::System::Nullable_1<int32_t>> targetDisplay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            "GetLocalScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, evt, targetDisplay);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::DefaultEventSystem::DefaultEventSystem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultEventSystem>())) {}
 void ::UnityEngine::UIElements::DefaultEventSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
