#pragma once
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfoPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemapPool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.get_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(&::UnityEngine::UIElements::UIR::VectorImageManager::get_atlas)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c54670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::AtlasBase)>(&::UnityEngine::UIElements::UIR::VectorImageManager::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2c54684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(&::UnityEngine::UIElements::UIR::VectorImageManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c54840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(bool)>(&::UnityEngine::UIElements::UIR::VectorImageManager::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c54848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(&::UnityEngine::UIElements::UIR::VectorImageManager::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c54854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(bool)>(&::UnityEngine::UIElements::UIR::VectorImageManager::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2c548c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::UIR::VectorImageManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Commit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(&::UnityEngine::UIElements::UIR::VectorImageManager::Commit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c549d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.AddUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::GradientRemap (::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::VectorImage, ::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::UIR::VectorImageManager::AddUser)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c54a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::VectorImageRenderInfo (::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::VectorImage, ::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::UIR::VectorImageManager::Register)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2c54b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::VectorImageManager::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_instances(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager> ::UnityEngine::UIElements::UIR::VectorImageManager::__get_instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>();
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_s_MarkerRegister(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRegister", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIR::VectorImageManager::__get_s_MarkerRegister()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRegister", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>();
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_s_MarkerUnregister(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUnregister", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIR::VectorImageManager::__get_s_MarkerUnregister()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUnregister", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get>();
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_Atlas(::UnityEngine::UIElements::AtlasBase value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::AtlasBase, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::AtlasBase>(value));
}
constexpr ::UnityEngine::UIElements::AtlasBase ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_Atlas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AtlasBase, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_Registered(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VectorImage,::UnityEngine::UIElements::UIR::VectorImageRenderInfo> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VectorImage,::UnityEngine::UIElements::UIR::VectorImageRenderInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VectorImage,::UnityEngine::UIElements::UIR::VectorImageRenderInfo>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VectorImage,::UnityEngine::UIElements::UIR::VectorImageRenderInfo> ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_Registered() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VectorImage,::UnityEngine::UIElements::UIR::VectorImageRenderInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_RenderInfoPool(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool>(value));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_RenderInfoPool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_GradientRemapPool(::UnityEngine::UIElements::UIR::GradientRemapPool value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::GradientRemapPool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::GradientRemapPool>(value));
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemapPool ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_GradientRemapPool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::GradientRemapPool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_GradientSettingsAtlas(::UnityEngine::UIElements::UIR::GradientSettingsAtlas value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::GradientSettingsAtlas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::GradientSettingsAtlas>(value));
}
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_GradientSettingsAtlas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::GradientSettingsAtlas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set_m_LoggedExhaustedSettingsAtlas(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::VectorImageManager::__get_m_LoggedExhaustedSettingsAtlas() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::VectorImageManager::__set__disposed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::VectorImageManager::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Texture2D ::UnityEngine::UIElements::UIR::VectorImageManager::get_atlas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "atlas", ty: "::UnityEngine::UIElements::AtlasBase", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::UIR::VectorImageManager::VectorImageManager(::UnityEngine::UIElements::AtlasBase atlas)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<VectorImageManager>(atlas))) {}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::_ctor(::UnityEngine::UIElements::AtlasBase atlas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, atlas);
}
 bool ::UnityEngine::UIElements::UIR::VectorImageManager::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::set_disposed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::UnityEngine::UIElements::UIR::VectorImageManager::Commit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::UIR::GradientRemap ::UnityEngine::UIElements::UIR::VectorImageManager::AddUser(::UnityEngine::UIElements::VectorImage vi, ::UnityEngine::UIElements::VisualElement context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::GradientRemap, false>(const_cast<void*>(instance), ___internal_method, vi, context);
}
 ::UnityEngine::UIElements::UIR::VectorImageRenderInfo ::UnityEngine::UIElements::UIR::VectorImageManager::Register(::UnityEngine::UIElements::VectorImage vi, ::UnityEngine::UIElements::VisualElement context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageRenderInfo, false>(const_cast<void*>(instance), ___internal_method, vi, context);
}
} // end anonymous namespace
