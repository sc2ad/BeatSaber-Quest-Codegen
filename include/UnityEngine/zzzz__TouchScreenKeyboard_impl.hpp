#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_InternalConstructorHelperArguments_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::____UnityEngine__TouchScreenKeyboard__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status  ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::Visible{0};
constexpr ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status  ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::Done{1};
constexpr ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status  ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::Canceled{2};
constexpr ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status  ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status::LostFocus{3};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Internal_Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::TouchScreenKeyboard::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b553ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Internal_Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::Destroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b553e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b554b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TouchScreenKeyboard),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::StringW, int32_t)>(&::UnityEngine::TouchScreenKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2b55548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.TouchScreenKeyboard_InternalConstructorHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>, ::StringW, ::StringW)>(&::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b556a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "TouchScreenKeyboard_InternalConstructorHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_isSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_isSupported)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b556f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_disableInPlaceEditing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_disableInPlaceEditing)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b55750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_disableInPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b55798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_isInPlaceEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.IsInPlaceEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TouchScreenKeyboard::IsInPlaceEditingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b55804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "IsInPlaceEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::StringW, int32_t)>(&::UnityEngine::TouchScreenKeyboard::Open)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b5582c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard (*)(::StringW, ::UnityEngine::TouchScreenKeyboardType, bool, bool, bool)>(&::UnityEngine::TouchScreenKeyboard::Open)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b558ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_text)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::StringW)>(&::UnityEngine::TouchScreenKeyboard::set_text)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b559b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_hideInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::TouchScreenKeyboard::set_hideInput)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b559f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_hideInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_active)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(bool)>(&::UnityEngine::TouchScreenKeyboard::set_active)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b55a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_status)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(int32_t)>(&::UnityEngine::TouchScreenKeyboard::set_characterLimit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b55af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canGetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_canGetSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_canGetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_canSetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_canSetSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_canSetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.get_selection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RangeInt (::UnityEngine::TouchScreenKeyboard::*)()>(&::UnityEngine::TouchScreenKeyboard::get_selection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b55bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_selection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.set_selection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TouchScreenKeyboard::*)(::UnityEngine::RangeInt)>(&::UnityEngine::TouchScreenKeyboard::set_selection)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b55c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_selection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RangeInt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.GetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ByRef<int32_t>)>(&::UnityEngine::TouchScreenKeyboard::GetSelection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b55bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "GetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TouchScreenKeyboard.SetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::TouchScreenKeyboard::SetSelection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b55d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::TouchScreenKeyboard::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::TouchScreenKeyboard::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::TouchScreenKeyboard::__set__disableInPlaceEditing_k__BackingField(bool value)  {
::cordl_internals::setStaticField<bool, "<disableInPlaceEditing>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get>(std::forward<bool>(value));
}
 bool ::UnityEngine::TouchScreenKeyboard::__get__disableInPlaceEditing_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<disableInPlaceEditing>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get>();
}
 void ::UnityEngine::TouchScreenKeyboard::Internal_Destroy(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Internal_Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
 void ::UnityEngine::TouchScreenKeyboard::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TouchScreenKeyboard::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyboardType", ty: "::UnityEngine::TouchScreenKeyboardType", modifiers: "", def_value: None }, CppParam { name: "autocorrection", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "multiline", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "alert", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "textPlaceholder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TouchScreenKeyboard>(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit))) {}
 void ::UnityEngine::TouchScreenKeyboard::_ctor(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit);
}
 ::cordl_internals::intptr_t ::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::StringW text, ::StringW textPlaceholder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "TouchScreenKeyboard_InternalConstructorHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, arguments, text, textPlaceholder);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_isSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_disableInPlaceEditing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_disableInPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_isInPlaceEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::TouchScreenKeyboard::IsInPlaceEditingAllowed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "IsInPlaceEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::UnityEngine::TouchScreenKeyboard ::UnityEngine::TouchScreenKeyboard::Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::StringW textPlaceholder, int32_t characterLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard, false>(nullptr, ___internal_method, text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit);
}
 ::UnityEngine::TouchScreenKeyboard ::UnityEngine::TouchScreenKeyboard::Open(::StringW text, ::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard, false>(nullptr, ___internal_method, text, keyboardType, autocorrection, multiline, secure);
}
 ::StringW ::UnityEngine::TouchScreenKeyboard::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TouchScreenKeyboard::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::TouchScreenKeyboard::set_hideInput(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_hideInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TouchScreenKeyboard::set_active(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status ::UnityEngine::TouchScreenKeyboard::get_status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TouchScreenKeyboard::set_characterLimit(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_canGetSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_canGetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TouchScreenKeyboard::get_canSetSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_canSetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::RangeInt ::UnityEngine::TouchScreenKeyboard::get_selection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "get_selection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RangeInt, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TouchScreenKeyboard::set_selection(::UnityEngine::RangeInt value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "set_selection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RangeInt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::TouchScreenKeyboard::GetSelection(ByRef<int32_t> start, ByRef<int32_t> length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "GetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, length);
}
 void ::UnityEngine::TouchScreenKeyboard::SetSelection(int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TouchScreenKeyboard>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, length);
}
} // end anonymous namespace
