#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: HMUI::UIKeyboardKey.get_keyCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::KeyCode (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fab3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::UIKeyboardKey.get_canBeUppercase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::get_canBeUppercase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fab404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "get_canBeUppercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::UIKeyboardKey.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1fab40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::UIKeyboardKey.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1fab4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::UIKeyboardKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fab590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::UIKeyboardKey::__set__keyCode(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode HMUI::UIKeyboardKey::__get__keyCode() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::UIKeyboardKey::__set__text(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI HMUI::UIKeyboardKey::__get__text() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::UIKeyboardKey::__set__overrideText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HMUI::UIKeyboardKey::__get__overrideText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::UIKeyboardKey::__set__canBeUppercase(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::UIKeyboardKey::__get__canBeUppercase() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::KeyCode HMUI::UIKeyboardKey::get_keyCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::KeyCode, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HMUI::UIKeyboardKey::get_canBeUppercase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "get_canBeUppercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::UIKeyboardKey::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::UIKeyboardKey::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::UIKeyboardKey::UIKeyboardKey()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<UIKeyboardKey>())) {}
 void HMUI::UIKeyboardKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::UIKeyboardKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
