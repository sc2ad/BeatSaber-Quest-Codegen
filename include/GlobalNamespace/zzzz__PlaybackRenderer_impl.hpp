#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type  GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type::Foreground{1};
constexpr GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type  GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type::Background{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_texture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_texture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_layerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_layerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_path
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.set_path
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a6004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "set_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.get_backgroundColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)()>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a600c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)(::StringW, UnityEngine::LayerMask, GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type, UnityEngine::Color)>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21a6018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot.CreateTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::*)(int32_t, int32_t)>(&GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::CreateTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21a57ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__layerMask(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__layerMask() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__type(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__type() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__texture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__texture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__set__backgroundColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::__get__backgroundColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::RenderTexture GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_texture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_texture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RenderTexture, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::LayerMask GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_layerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_layerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::set_path(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "set_path",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "get_backgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "type", ty: "GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot(::StringW name, UnityEngine::LayerMask layerMask, GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type type, UnityEngine::Color backgroundColor)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>(name, layerMask, type, backgroundColor))) {}
 void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::_ctor(::StringW name, UnityEngine::LayerMask layerMask, GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type type, UnityEngine::Color backgroundColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, layerMask, type, backgroundColor);
}
 void GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot::CreateTexture(int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, width, height);
}
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.add_texturesReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(System::Action)>(&GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21a5268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "add_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.remove_texturesReadyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(System::Action)>(&GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21a5304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "remove_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.get_screenshots
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::get_screenshots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a53a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "get_screenshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(UnityEngine::Camera, UnityEngine::Camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration, int32_t, int32_t, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>)>(&GlobalNamespace::PlaybackRenderer::Setup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21a4930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.CreateClipQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::CreateClipQuad)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x21a54b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "CreateClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.InitCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(UnityEngine::Camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration)>(&GlobalNamespace::PlaybackRenderer::InitCamera)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x21a53a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "InitCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.CreateTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(int32_t, int32_t)>(&GlobalNamespace::PlaybackRenderer::CreateTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21a5738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "CreateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.GetDistanceToHMD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::GetDistanceToHMD)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x21a5870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "GetDistanceToHMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.OrientClipQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::OrientClipQuad)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x21a5adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "OrientClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.RenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot)>(&GlobalNamespace::PlaybackRenderer::RenderForeground)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x21a5c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.RenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot)>(&GlobalNamespace::PlaybackRenderer::RenderBackground)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21a5ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21a5f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::*)()>(&GlobalNamespace::PlaybackRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a5fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlaybackRenderer::__set_texturesReadyEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PlaybackRenderer::__get_texturesReadyEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clearBackgroundShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::PlaybackRenderer::__get__clearBackgroundShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__isSetup(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PlaybackRenderer::__get__isSetup() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__hmd(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::PlaybackRenderer::__get__hmd() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__camera(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera GlobalNamespace::PlaybackRenderer::__get__camera() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__cameraCalibration(GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration GlobalNamespace::PlaybackRenderer::__get__cameraCalibration() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clipQuad(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::PlaybackRenderer::__get__clipQuad() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__clipMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::PlaybackRenderer::__get__clipMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackRenderer::__set__screenshots(::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> GlobalNamespace::PlaybackRenderer::__get__screenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "add_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "remove_texturesReadyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> GlobalNamespace::PlaybackRenderer::get_screenshots()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "get_screenshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackRenderer::Setup(UnityEngine::Camera hmdCamera, UnityEngine::Camera camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration cameraCalibration, int32_t textureWidth, int32_t textureHeight, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> screenshots)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hmdCamera, camera, cameraCalibration, textureWidth, textureHeight, screenshots);
}
 void GlobalNamespace::PlaybackRenderer::CreateClipQuad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "CreateClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackRenderer::InitCamera(UnityEngine::Camera camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration cameraCalibration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "InitCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, camera, cameraCalibration);
}
 void GlobalNamespace::PlaybackRenderer::CreateTextures(int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "CreateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, width, height);
}
 float_t GlobalNamespace::PlaybackRenderer::GetDistanceToHMD()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "GetDistanceToHMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackRenderer::OrientClipQuad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "OrientClipQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackRenderer::RenderForeground(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot screenshot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, screenshot);
}
 void GlobalNamespace::PlaybackRenderer::RenderBackground(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot screenshot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, screenshot);
}
 void GlobalNamespace::PlaybackRenderer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::PlaybackRenderer::PlaybackRenderer()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlaybackRenderer>())) {}
 void GlobalNamespace::PlaybackRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
