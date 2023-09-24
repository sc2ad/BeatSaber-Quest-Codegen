#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UI/zzzz__DefaultControls_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UI/zzzz__DefaultControls_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls.CreateGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls::*)(::StringW, ::ArrayW<System::Type>)>(&UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls::CreateGameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::GameObject UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls::CreateGameObject(::StringW name, ::ArrayW<System::Type> components)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls>::get(),
                            "CreateGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, name, components);
}
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory.CreateGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::*)(::StringW, ::ArrayW<System::Type>)>(&UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::CreateGameObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bdee98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get(),
                            "CreateGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::*)()>(&UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bdef0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls
constexpr  UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::operator UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls() const noexcept {
return UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::__set_Default(UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls value)  {
::cordl_internals::setStaticField<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get>(std::forward<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls>(value));
}
 UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::__get_Default()  {
return ::cordl_internals::getStaticField<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get>();
}
 UnityEngine::GameObject UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::CreateGameObject(::StringW name, ::ArrayW<System::Type> components)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get(),
                            "CreateGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, name, components);
}
 UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::New_ctor()  {
UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>())};
return o;
}
 void UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__DefaultControls__DefaultRuntimeFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "standard", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "background", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "inputField", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "knob", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "checkmark", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dropdown", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mask", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::UnityEngine__UI__DefaultControls__Resources(UnityEngine::Sprite standard, UnityEngine::Sprite background, UnityEngine::Sprite inputField, UnityEngine::Sprite knob, UnityEngine::Sprite checkmark, UnityEngine::Sprite dropdown, UnityEngine::Sprite mask) noexcept : ::bs_hook::ValueTypeWrapper() {this->standard = standard;
this->background = background;
this->inputField = inputField;
this->knob = knob;
this->checkmark = checkmark;
this->dropdown = dropdown;
this->mask = mask;
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_standard(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x0>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_standard() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x0>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_background(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x8>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_background() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x8>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_inputField(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x10>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_inputField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x10>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_knob(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x18>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_knob() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x18>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_checkmark(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x20>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_checkmark() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x20>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_dropdown(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x28>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_dropdown() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x28>(this->__instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__set_mask(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x30>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources::__get_mask() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x30>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UI::DefaultControls.get_factory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls (*)()>(&UnityEngine::UI::DefaultControls::get_factory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bda5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "get_factory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateUIElementRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW, UnityEngine::Vector2, ::ArrayW<System::Type>)>(&UnityEngine::UI::DefaultControls::CreateUIElementRoot)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2bda628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateUIElementRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateUIObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW, UnityEngine::GameObject, ::ArrayW<System::Type>)>(&UnityEngine::UI::DefaultControls::CreateUIObject)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2bda788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateUIObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.SetDefaultTextValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text)>(&UnityEngine::UI::DefaultControls::SetDefaultTextValues)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2bda9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetDefaultTextValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.SetDefaultColorTransitionValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Selectable)>(&UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bdaa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetDefaultColorTransitionValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.SetParentAndAlign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject)>(&UnityEngine::UI::DefaultControls::SetParentAndAlign)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2bda8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetParentAndAlign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.SetLayerRecursively
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, int32_t)>(&UnityEngine::UI::DefaultControls::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2bdaa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetLayerRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreatePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreatePanel)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2bdab80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreatePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateButton)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2bdb1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateText)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2bdb590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateImage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2bdb730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateRawImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateRawImage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2bdb86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateRawImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateSlider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateSlider)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x2bdb9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateSlider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateScrollbar)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2bdc05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateToggle)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x2bdc4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateInputField)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x2bdca48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateDropdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateDropdown)> {
  constexpr static std::size_t size = 0x1258;
  constexpr static std::size_t addrs = 0x2bdd068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::DefaultControls.CreateScrollView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources)>(&UnityEngine::UI::DefaultControls::CreateScrollView)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x2bde4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateScrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UI::DefaultControls::__set_m_CurrentFactory(UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls value)  {
::cordl_internals::setStaticField<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls, "m_CurrentFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls>(value));
}
 UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls UnityEngine::UI::DefaultControls::__get_m_CurrentFactory()  {
return ::cordl_internals::getStaticField<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls, "m_CurrentFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_ThickElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::UI::DefaultControls::__get_s_ThickElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_ThinElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::UI::DefaultControls::__get_s_ThinElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_ImageElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_ImageElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::UI::DefaultControls::__get_s_ImageElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_ImageElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_DefaultSelectableColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color UnityEngine::UI::DefaultControls::__get_s_DefaultSelectableColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_PanelColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "s_PanelColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color UnityEngine::UI::DefaultControls::__get_s_PanelColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "s_PanelColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 void UnityEngine::UI::DefaultControls::__set_s_TextColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color UnityEngine::UI::DefaultControls::__get_s_TextColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get>();
}
 UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls UnityEngine::UI::DefaultControls::get_factory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "get_factory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__DefaultControls__IFactoryControls, false>(nullptr, ___internal_method);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateUIElementRoot(::StringW name, UnityEngine::Vector2 size, ::ArrayW<System::Type> components)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateUIElementRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name, size, components);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateUIObject(::StringW name, UnityEngine::GameObject parent, ::ArrayW<System::Type> components)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateUIObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name, parent, components);
}
 void UnityEngine::UI::DefaultControls::SetDefaultTextValues(UnityEngine::UI::Text lbl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetDefaultTextValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lbl);
}
 void UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues(UnityEngine::UI::Selectable slider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetDefaultColorTransitionValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slider);
}
 void UnityEngine::UI::DefaultControls::SetParentAndAlign(UnityEngine::GameObject child, UnityEngine::GameObject parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetParentAndAlign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, child, parent);
}
 void UnityEngine::UI::DefaultControls::SetLayerRecursively(UnityEngine::GameObject go, int32_t layer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "SetLayerRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, layer);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreatePanel(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreatePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateButton(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateText(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateImage(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateRawImage(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateRawImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateSlider(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateSlider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateScrollbar(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateToggle(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateInputField(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateDropdown(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject UnityEngine::UI::DefaultControls::CreateScrollView(UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::DefaultControls>::get(),
                            "CreateScrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
