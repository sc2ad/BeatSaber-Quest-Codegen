#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f91d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)(UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColor::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f91d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor.get_bgColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::get_bgColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f91d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "get_bgColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor.InitIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::InitIfNeeded)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1f91e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "InitIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)(UnityEngine::RenderTexture, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundColor::Render)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1f91f84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1f92058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundColor::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBackgroundColor::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColor::__set__minAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBackgroundColor::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColor::__set__grayscaleFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBackgroundColor::__get__grayscaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColor::__set__shader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::BloomPrePassBackgroundColor::__get__shader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColor::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundColor::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassBackgroundColor::__set__colorID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_colorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::BloomPrePassBackgroundColor::__get__colorID()  {
return ::cordl_internals::getStaticField<int32_t, "_colorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>();
}
 void GlobalNamespace::BloomPrePassBackgroundColor::__set__material(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::BloomPrePassBackgroundColor::__get__material()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "_material", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>();
}
 void GlobalNamespace::BloomPrePassBackgroundColor::__set__initialized(bool value)  {
::cordl_internals::setStaticField<bool, "_initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>(std::forward<bool>(value));
}
 bool GlobalNamespace::BloomPrePassBackgroundColor::__get__initialized()  {
return ::cordl_internals::getStaticField<bool, "_initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get>();
}
 UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundColor::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassBackgroundColor::set_color(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundColor::get_bgColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "get_bgColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassBackgroundColor::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "InitIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassBackgroundColor::Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dest, viewMatrix, projectionMatrix);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassBackgroundColor::BloomPrePassBackgroundColor()  : GlobalNamespace::BloomPrePassNonLightPass(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBackgroundColor>())) {}
 void GlobalNamespace::BloomPrePassBackgroundColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
