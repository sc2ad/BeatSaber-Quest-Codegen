#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType::____UnityEngine__UIElements__UIR__Utility__GPUBufferType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType  ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType::Vertex{0};
constexpr ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType  ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType::Index{1};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_GraphicsResourcesRecreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<bool>)>(&::UnityEngine::UIElements::UIR::Utility::add_GraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d2f0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_GraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_GraphicsResourcesRecreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<bool>)>(&::UnityEngine::UIElements::UIR::Utility::remove_GraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d2f1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_GraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_EngineUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::UnityEngine::UIElements::UIR::Utility::add_EngineUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d2f294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_EngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_EngineUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::UnityEngine::UIElements::UIR::Utility::remove_EngineUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d2f370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_EngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_FlushPendingResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::UnityEngine::UIElements::UIR::Utility::add_FlushPendingResources)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d2f44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_FlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_FlushPendingResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action)>(&::UnityEngine::UIElements::UIR::Utility::remove_FlushPendingResources)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d2f528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_FlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_RegisterIntermediateRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Camera>)>(&::UnityEngine::UIElements::UIR::Utility::add_RegisterIntermediateRenderers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d2f604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_RegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Camera>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_RegisterIntermediateRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Camera>)>(&::UnityEngine::UIElements::UIR::Utility::remove_RegisterIntermediateRenderers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d2f6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_RegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Camera>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.add_RenderNodeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::cordl_internals::intptr_t>)>(&::UnityEngine::UIElements::UIR::Utility::add_RenderNodeExecute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d2f7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_RenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.remove_RenderNodeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::cordl_internals::intptr_t>)>(&::UnityEngine::UIElements::UIR::Utility::remove_RenderNodeExecute)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d2f8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_RenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseGraphicsResourcesRecreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIR::Utility::RaiseGraphicsResourcesRecreate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d2f9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseGraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseEngineUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::RaiseEngineUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d2fa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseEngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseFlushPendingResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::RaiseFlushPendingResources)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d2fae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseFlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseRegisterIntermediateRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera)>(&::UnityEngine::UIElements::UIR::Utility::RaiseRegisterIntermediateRenderers)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d2fb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseRenderNodeAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeAdd)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d2fbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseRenderNodeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeExecute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d2fc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RaiseRenderNodeCleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeCleanup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d2fccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.AllocateBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(int32_t, int32_t, bool)>(&::UnityEngine::UIElements::UIR::Utility::AllocateBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d2fd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "AllocateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.FreeBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::UIElements::UIR::Utility::FreeBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d2fd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "FreeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.UpdateBufferRanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, ::cordl_internals::intptr_t, int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::UpdateBufferRanges)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d2fdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "UpdateBufferRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetVectorArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock, int32_t, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::SetVectorArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d2fe44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetVectorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetVertexDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d2fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetVertexDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RegisterIntermediateRenderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ::UnityEngine::Material, ::UnityEngine::Matrix4x4, ::UnityEngine::Bounds, int32_t, int32_t, bool, int32_t, uint64_t, int32_t, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::RegisterIntermediateRenderer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d2fedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RegisterIntermediateRenderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.DrawRanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, void*, int32_t, ::cordl_internals::intptr_t, int32_t, ::cordl_internals::intptr_t)>(&::UnityEngine::UIElements::UIR::Utility::DrawRanges)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d30088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "DrawRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock)>(&::UnityEngine::UIElements::UIR::Utility::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d300fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetScissorRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIR::Utility::SetScissorRect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d30138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetScissorRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.DisableScissor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::DisableScissor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d301f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "DisableScissor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CreateStencilState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::UnityEngine::Rendering::StencilState)>(&::UnityEngine::UIElements::UIR::Utility::CreateStencilState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d3021c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CreateStencilState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetStencilState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::SetStencilState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d302dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetStencilState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.HasMappedBufferRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIR::Utility::HasMappedBufferRange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d30320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "HasMappedBufferRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.InsertCPUFence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::UIElements::UIR::Utility::InsertCPUFence)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d30348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "InsertCPUFence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CPUFencePassed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Utility::CPUFencePassed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d30370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CPUFencePassed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.WaitForCPUFencePassed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Utility::WaitForCPUFencePassed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d303ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "WaitForCPUFencePassed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SyncRenderThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::SyncRenderThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d303e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SyncRenderThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetActiveViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectInt (*)()>(&::UnityEngine::UIElements::UIR::Utility::GetActiveViewport)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d30410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetActiveViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.ProfileDrawChainBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainBegin)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d304d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "ProfileDrawChainBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.ProfileDrawChainEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainEnd)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d304f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "ProfileDrawChainEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.NotifyOfUIREvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIR::Utility::NotifyOfUIREvents)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d30520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "NotifyOfUIREvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetUnityProjectionMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d3055c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetUnityProjectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.RegisterIntermediateRenderer_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ::UnityEngine::Material, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Bounds>, int32_t, int32_t, bool, int32_t, uint64_t, int32_t, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::UIElements::UIR::Utility::RegisterIntermediateRenderer_Injected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d2ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RegisterIntermediateRenderer_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.SetScissorRect_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::RectInt>)>(&::UnityEngine::UIElements::UIR::Utility::SetScissorRect_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d301b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetScissorRect_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RectInt>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.CreateStencilState_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(ByRef<::UnityEngine::Rendering::StencilState>)>(&::UnityEngine::UIElements::UIR::Utility::CreateStencilState_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d302a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CreateStencilState_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::StencilState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetActiveViewport_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::RectInt>)>(&::UnityEngine::UIElements::UIR::Utility::GetActiveViewport_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d30494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetActiveViewport_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RectInt>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Utility.GetUnityProjectionMatrix_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d305f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetUnityProjectionMatrix_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::UIR::Utility::__set_GraphicsResourcesRecreate(::System::Action_1<bool> value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>, "GraphicsResourcesRecreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action_1<bool>>(value));
}
 ::System::Action_1<bool> ::UnityEngine::UIElements::UIR::Utility::__get_GraphicsResourcesRecreate()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>, "GraphicsResourcesRecreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_EngineUpdate(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "EngineUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::UnityEngine::UIElements::UIR::Utility::__get_EngineUpdate()  {
return ::cordl_internals::getStaticField<::System::Action, "EngineUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_FlushPendingResources(::System::Action value)  {
::cordl_internals::setStaticField<::System::Action, "FlushPendingResources", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action>(value));
}
 ::System::Action ::UnityEngine::UIElements::UIR::Utility::__get_FlushPendingResources()  {
return ::cordl_internals::getStaticField<::System::Action, "FlushPendingResources", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Camera>, "RegisterIntermediateRenderers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action_1<::UnityEngine::Camera>>(value));
}
 ::System::Action_1<::UnityEngine::Camera> ::UnityEngine::UIElements::UIR::Utility::__get_RegisterIntermediateRenderers()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Camera>, "RegisterIntermediateRenderers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_RenderNodeAdd(::System::Action_1<::cordl_internals::intptr_t> value)  {
::cordl_internals::setStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeAdd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action_1<::cordl_internals::intptr_t>>(value));
}
 ::System::Action_1<::cordl_internals::intptr_t> ::UnityEngine::UIElements::UIR::Utility::__get_RenderNodeAdd()  {
return ::cordl_internals::getStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeAdd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_RenderNodeExecute(::System::Action_1<::cordl_internals::intptr_t> value)  {
::cordl_internals::setStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeExecute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action_1<::cordl_internals::intptr_t>>(value));
}
 ::System::Action_1<::cordl_internals::intptr_t> ::UnityEngine::UIElements::UIR::Utility::__get_RenderNodeExecute()  {
return ::cordl_internals::getStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeExecute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_RenderNodeCleanup(::System::Action_1<::cordl_internals::intptr_t> value)  {
::cordl_internals::setStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeCleanup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::System::Action_1<::cordl_internals::intptr_t>>(value));
}
 ::System::Action_1<::cordl_internals::intptr_t> ::UnityEngine::UIElements::UIR::Utility::__get_RenderNodeCleanup()  {
return ::cordl_internals::getStaticField<::System::Action_1<::cordl_internals::intptr_t>, "RenderNodeCleanup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
 void ::UnityEngine::UIElements::UIR::Utility::__set_s_MarkerRaiseEngineUpdate(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRaiseEngineUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIR::Utility::__get_s_MarkerRaiseEngineUpdate()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRaiseEngineUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get>();
}
template<typename T>
 void ::UnityEngine::UIElements::UIR::Utility::SetVectorArray(::UnityEngine::MaterialPropertyBlock props, int32_t name, ::Unity::Collections::NativeSlice_1<T> vector4s)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                        "SetVectorArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, props, name, vector4s);
}
 void ::UnityEngine::UIElements::UIR::Utility::add_GraphicsResourcesRecreate(::System::Action_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_GraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::remove_GraphicsResourcesRecreate(::System::Action_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_GraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::add_EngineUpdate(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_EngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::remove_EngineUpdate(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_EngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::add_FlushPendingResources(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_FlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::remove_FlushPendingResources(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_FlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::add_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_RegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Camera>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::remove_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_RegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Camera>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::add_RenderNodeExecute(::System::Action_1<::cordl_internals::intptr_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "add_RenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::remove_RenderNodeExecute(::System::Action_1<::cordl_internals::intptr_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "remove_RenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseGraphicsResourcesRecreate(bool recreate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseGraphicsResourcesRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, recreate);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseEngineUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseEngineUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseFlushPendingResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseFlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseRegisterIntermediateRenderers(::UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeAdd(::cordl_internals::intptr_t userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeExecute(::cordl_internals::intptr_t userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData);
}
 void ::UnityEngine::UIElements::UIR::Utility::RaiseRenderNodeCleanup(::cordl_internals::intptr_t userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RaiseRenderNodeCleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::Utility::AllocateBuffer(int32_t elementCount, int32_t elementStride, bool vertexBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "AllocateBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, elementCount, elementStride, vertexBuffer);
}
 void ::UnityEngine::UIElements::UIR::Utility::FreeBuffer(::cordl_internals::intptr_t buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "FreeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
 void ::UnityEngine::UIElements::UIR::Utility::UpdateBufferRanges(::cordl_internals::intptr_t buffer, ::cordl_internals::intptr_t ranges, int32_t rangeCount, int32_t writeRangeStart, int32_t writeRangeEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "UpdateBufferRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, ranges, rangeCount, writeRangeStart, writeRangeEnd);
}
 void ::UnityEngine::UIElements::UIR::Utility::SetVectorArray(::UnityEngine::MaterialPropertyBlock props, int32_t name, ::cordl_internals::intptr_t vector4s, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetVectorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, props, name, vector4s, count);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::Utility::GetVertexDeclaration(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> vertexAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetVertexDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, vertexAttributes);
}
 void ::UnityEngine::UIElements::UIR::Utility::RegisterIntermediateRenderer(::UnityEngine::Camera camera, ::UnityEngine::Material material, ::UnityEngine::Matrix4x4 transform, ::UnityEngine::Bounds aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags, ::cordl_internals::intptr_t userData, int32_t userDataSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RegisterIntermediateRenderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, material, transform, aabb, renderLayer, shadowCasting, receiveShadows, sameDistanceSortPriority, sceneCullingMask, rendererCallbackFlags, userData, userDataSize);
}
 void ::UnityEngine::UIElements::UIR::Utility::DrawRanges(::cordl_internals::intptr_t ib, void* vertexStreams, int32_t streamCount, ::cordl_internals::intptr_t ranges, int32_t rangeCount, ::cordl_internals::intptr_t vertexDecl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "DrawRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ib, vertexStreams, streamCount, ranges, rangeCount, vertexDecl);
}
 void ::UnityEngine::UIElements::UIR::Utility::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock props)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, props);
}
 void ::UnityEngine::UIElements::UIR::Utility::SetScissorRect(::UnityEngine::RectInt scissorRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetScissorRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scissorRect);
}
 void ::UnityEngine::UIElements::UIR::Utility::DisableScissor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "DisableScissor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::Utility::CreateStencilState(::UnityEngine::Rendering::StencilState stencilState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CreateStencilState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, stencilState);
}
 void ::UnityEngine::UIElements::UIR::Utility::SetStencilState(::cordl_internals::intptr_t stencilState, int32_t stencilRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetStencilState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stencilState, stencilRef);
}
 bool ::UnityEngine::UIElements::UIR::Utility::HasMappedBufferRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "HasMappedBufferRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 uint32_t ::UnityEngine::UIElements::UIR::Utility::InsertCPUFence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "InsertCPUFence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
 bool ::UnityEngine::UIElements::UIR::Utility::CPUFencePassed(uint32_t fence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CPUFencePassed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fence);
}
 void ::UnityEngine::UIElements::UIR::Utility::WaitForCPUFencePassed(uint32_t fence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "WaitForCPUFencePassed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fence);
}
 void ::UnityEngine::UIElements::UIR::Utility::SyncRenderThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SyncRenderThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::UnityEngine::RectInt ::UnityEngine::UIElements::UIR::Utility::GetActiveViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetActiveViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "ProfileDrawChainBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::ProfileDrawChainEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "ProfileDrawChainEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::NotifyOfUIREvents(bool subscribe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "NotifyOfUIREvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, subscribe);
}
 ::UnityEngine::Matrix4x4 ::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetUnityProjectionMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Utility::RegisterIntermediateRenderer_Injected(::UnityEngine::Camera camera, ::UnityEngine::Material material, ByRef<::UnityEngine::Matrix4x4> transform, ByRef<::UnityEngine::Bounds> aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags, ::cordl_internals::intptr_t userData, int32_t userDataSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "RegisterIntermediateRenderer_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, material, transform, aabb, renderLayer, shadowCasting, receiveShadows, sameDistanceSortPriority, sceneCullingMask, rendererCallbackFlags, userData, userDataSize);
}
 void ::UnityEngine::UIElements::UIR::Utility::SetScissorRect_Injected(ByRef<::UnityEngine::RectInt> scissorRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "SetScissorRect_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RectInt>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scissorRect);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::Utility::CreateStencilState_Injected(ByRef<::UnityEngine::Rendering::StencilState> stencilState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "CreateStencilState_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::StencilState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, stencilState);
}
 void ::UnityEngine::UIElements::UIR::Utility::GetActiveViewport_Injected(ByRef<::UnityEngine::RectInt> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetActiveViewport_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RectInt>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
 void ::UnityEngine::UIElements::UIR::Utility::GetUnityProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Utility>::get(),
                            "GetUnityProjectionMatrix_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::*)(int32_t, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType)>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>.UpdateRanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::UpdateRanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "UpdateRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>.get_ElementStride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::get_ElementStride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "get_ElementStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>.get_BufferPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::get_BufferPointer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "get_BufferPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__set_buffer(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__get_buffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__set_elemCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__get_elemCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__set_elemStride(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::__get_elemStride() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(int32_t elementCount, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1>(elementCount, type))) {}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::_ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elementCount, type);
}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "UpdateRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ranges, rangesMin, rangesMax);
}
 int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::get_ElementStride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "get_ElementStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>::get_BufferPointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>>::get(),
                            "get_BufferPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::*)(int32_t, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType)>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>.UpdateRanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::UpdateRanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "UpdateRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>.get_ElementStride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::get_ElementStride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "get_ElementStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>.get_BufferPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::*)()>(&::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::get_BufferPointer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "get_BufferPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__set_buffer(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__get_buffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__set_elemCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__get_elemCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__set_elemStride(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::__get_elemStride() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(int32_t elementCount, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1>(elementCount, type))) {}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::_ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBufferType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elementCount, type);
}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "UpdateRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ranges, rangesMin, rangesMax);
}
 int32_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::get_ElementStride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "get_ElementStride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>::get_BufferPointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "get_BufferPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
