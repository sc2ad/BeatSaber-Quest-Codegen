#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRTextUpdatePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking.EnsureFits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::*)(int32_t)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::EnsureFits)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d1a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "EnsureFits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking.RegisterDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::UIR::RenderDataDirtyTypes, UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::RegisterDirty)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2d1a4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "RegisterDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking.ClearDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::UIR::RenderDataDirtyTypes)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::ClearDirty)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2d1a660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "ClearDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d1a7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "heads", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "tails", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "minDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> heads, System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> tails, ::ArrayW<int32_t> minDepths, ::ArrayW<int32_t> maxDepths, uint32_t dirtyID) noexcept : ::bs_hook::ValueTypeWrapper() {this->heads = heads;
this->tails = tails;
this->minDepths = minDepths;
this->maxDepths = maxDepths;
this->dirtyID = dirtyID;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__set_heads(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x0>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__get_heads() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__set_tails(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x8>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__get_tails() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__set_minDepths(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->__instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__get_minDepths() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__set_maxDepths(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->__instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__get_maxDepths() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__set_dirtyID(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::__get_dirtyID() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::EnsureFits(int32_t maxDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "EnsureFits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxDepth);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::RegisterDirty(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes, UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "RegisterDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ve, dirtyTypes, dirtyTypeClass);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::ClearDirty(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "ClearDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderDataDirtyTypes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ve, dirtyTypesInverse);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator.AllocateIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::UIElements::UIR::RenderChain)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::AllocateIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2d1a868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "AllocateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator.FreeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::FreeIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d1a9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "FreeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator.AccessIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::RenderChain (*)(int32_t)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::AccessIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d1aa3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "AccessIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::__set_renderChains(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain>, "renderChains", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::__get_renderChains()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain>, "renderChains", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get>();
}
 int32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::AllocateIndex(UnityEngine::UIElements::UIR::RenderChain renderChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "AllocateIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderChain);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::FreeIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "FreeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index);
}
 UnityEngine::UIElements::UIR::RenderChain UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator::AccessIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator>::get(),
                            "AccessIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::RenderChain, false>(nullptr, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "standardMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "initialMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "matPropBlock", ty: "UnityEngine::MaterialPropertyBlock", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "device", ty: "UnityEngine::UIElements::UIR::UIRenderDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "vectorAtlas", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shaderInfoAtlas", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dpiScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformConstants", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipRectConstants", ty: "Unity::Collections::NativeSlice_1<UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData(UnityEngine::Material standardMaterial, UnityEngine::Material initialMaterial, UnityEngine::MaterialPropertyBlock matPropBlock, UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::UIRenderDevice device, UnityEngine::Texture vectorAtlas, UnityEngine::Texture shaderInfoAtlas, float_t dpiScale, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> transformConstants, Unity::Collections::NativeSlice_1<UnityEngine::Vector4> clipRectConstants) noexcept : ::bs_hook::ValueTypeWrapper() {this->standardMaterial = standardMaterial;
this->initialMaterial = initialMaterial;
this->matPropBlock = matPropBlock;
this->firstCommand = firstCommand;
this->device = device;
this->vectorAtlas = vectorAtlas;
this->shaderInfoAtlas = shaderInfoAtlas;
this->dpiScale = dpiScale;
this->transformConstants = transformConstants;
this->clipRectConstants = clipRectConstants;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_standardMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x0>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_standardMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_initialMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x8>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_initialMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_matPropBlock(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setInstanceField<UnityEngine::MaterialPropertyBlock, 0x10>(this->__instance, std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
constexpr UnityEngine::MaterialPropertyBlock UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_matPropBlock() const {
return ::cordl_internals::getInstanceField<UnityEngine::MaterialPropertyBlock, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_firstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x18>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_firstCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_device(UnityEngine::UIElements::UIR::UIRenderDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UIRenderDevice, 0x20>(this->__instance, std::forward<UnityEngine::UIElements::UIR::UIRenderDevice>(value));
}
constexpr UnityEngine::UIElements::UIR::UIRenderDevice UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_device() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UIRenderDevice, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_vectorAtlas(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x28>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_vectorAtlas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_shaderInfoAtlas(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x30>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_shaderInfoAtlas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_dpiScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_dpiScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_transformConstants(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>, 0x40>(this->__instance, std::forward<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>>(value));
}
constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_transformConstants() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>, 0x40>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__set_clipRectConstants(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>, 0x50>(this->__instance, std::forward<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>>(value));
}
constexpr Unity::Collections::NativeSlice_1<UnityEngine::Vector4> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData::__get_clipRectConstants() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>, 0x50>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c.__ctor_b__37_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::RenderChainCommand (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__ctor_b__37_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d1abb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            "<.ctor>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c.__ctor_b__37_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::*)(UnityEngine::UIElements::UIR::RenderChainCommand)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__ctor_b__37_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d1ac14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            "<.ctor>b__37_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>(std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>(value));
}
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>();
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__set___9__37_0(System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand> value)  {
::cordl_internals::setStaticField<System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>(std::forward<System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand>>(value));
}
 System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__get___9__37_0()  {
return ::cordl_internals::getStaticField<System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>();
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__set___9__37_1(System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand>, "<>9__37_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>(std::forward<System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand>>(value));
}
 System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__get___9__37_1()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand>, "<>9__37_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get>();
}
// Ctor Parameters []
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::UnityEngine__UIElements__UIR__RenderChain____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__UIR__RenderChain____c>())) {}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__ctor_b__37_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            "<.ctor>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::RenderChainCommand, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c::__ctor_b__37_1(UnityEngine::UIElements::UIR::RenderChainCommand cmd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c>::get(),
                            "<.ctor>b__37_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cmd);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::BaseVisualElementPanel)>(&UnityEngine::UIElements::UIR::RenderChain::_ctor)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2d16344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.Constructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::BaseVisualElementPanel, UnityEngine::UIElements::UIR::UIRenderDevice, UnityEngine::UIElements::AtlasBase, UnityEngine::UIElements::UIR::VectorImageManager)>(&UnityEngine::UIElements::UIR::RenderChain::Constructor)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2d166fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Constructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UIRenderDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AtlasBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::VectorImageManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.Destructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::Destructor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2d16a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Destructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d16e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&UnityEngine::UIElements::UIR::RenderChain::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d16e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d16e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&UnityEngine::UIElements::UIR::RenderChain::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d16ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.ProcessChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::ProcessChanges)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x2d16ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ProcessChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::Render)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2d176c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.ProcessTextRegen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&UnityEngine::UIElements::UIR::RenderChain::ProcessTextRegen)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2d17498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ProcessTextRegen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnChildAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2d18960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnChildrenReordered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2d18ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildrenReordered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnChildRemoving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d18ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildRemoving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.StopTrackingGroupTransformElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::StopTrackingGroupTransformElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d18fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "StopTrackingGroupTransformElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnRenderHintsChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d18ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnRenderHintsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnClippingChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement, bool)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d18b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnClippingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnOpacityChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement, bool)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d18bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnOpacityChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnColorChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d19098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnColorChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnTransformOrSizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement, bool, bool)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d19120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnTransformOrSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.UIEOnVisualsChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement, bool)>(&UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d18c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnVisualsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::BaseVisualElementPanel (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::BaseVisualElementPanel)>(&UnityEngine::UIElements::UIR::RenderChain::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_device
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::UIRenderDevice (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_device
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::UIRenderDevice)>(&UnityEngine::UIElements::UIR::RenderChain::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UIRenderDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::AtlasBase (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::AtlasBase)>(&UnityEngine::UIElements::UIR::RenderChain::set_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AtlasBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_vectorImageManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::VectorImageManager (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_vectorImageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_vectorImageManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::VectorImageManager)>(&UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_vectorImageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::VectorImageManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_painter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_painter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d191f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_painter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_painter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter)>(&UnityEngine::UIElements::UIR::RenderChain::set_painter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d19200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_painter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_drawStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d19208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_drawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_drawStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&UnityEngine::UIElements::UIR::RenderChain::set_drawStats)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d19210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_drawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.get_drawInCameras
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1921c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_drawInCameras",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_drawInCameras
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(bool)>(&UnityEngine::UIElements::UIR::RenderChain::set_drawInCameras)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d19224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_drawInCameras",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_defaultShader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::Shader)>(&UnityEngine::UIElements::UIR::RenderChain::set_defaultShader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d19230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_defaultShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Shader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.set_defaultWorldSpaceShader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::Shader)>(&UnityEngine::UIElements::UIR::RenderChain::set_defaultWorldSpaceShader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d192e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_defaultWorldSpaceShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Shader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.GetStandardMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::GetStandardMaterial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d17a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetStandardMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.GetStandardWorldSpaceMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::GetStandardWorldSpaceMaterial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d19390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetStandardWorldSpaceMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.EnsureFitsDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(int32_t)>(&UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d1947c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "EnsureFitsDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.ChildWillBeRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d19488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ChildWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.AllocCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::RenderChainCommand (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::AllocCommand)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d19540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AllocCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.FreeCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::RenderChainCommand)>(&UnityEngine::UIElements::UIR::RenderChain::FreeCommand)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d195a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "FreeCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::RenderChainCommand)>(&UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d19658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderCommandAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnRenderCommandsRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::UIR::RenderChainCommand, UnityEngine::UIElements::UIR::RenderChainCommand)>(&UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d196e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderCommandsRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.AddTextElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::AddTextElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d1970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AddTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.RemoveTextElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::RemoveTextElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d19740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "RemoveTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnGroupTransformElementChangedTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::OnGroupTransformElementChangedTransform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d19794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnGroupTransformElementChangedTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.AccessRenderNodeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData (*)(::cordl_internals::intptr_t)>(&UnityEngine::UIElements::UIR::RenderChain::AccessRenderNodeData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d198c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AccessRenderNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnRenderNodeExecute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::UIElements::UIR::RenderChain::OnRenderNodeExecute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d19998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnRegisterIntermediateRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Camera)>(&UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRenderers)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2d19a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnRegisterIntermediateRendererMat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::BaseRuntimePanel, UnityEngine::UIElements::UIR::RenderChain, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>, UnityEngine::Camera, int32_t)>(&UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRendererMat)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2d19ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRegisterIntermediateRendererMat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseRuntimePanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.RepaintTexturedElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d1a1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "RepaintTexturedElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.OnFontReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::Font)>(&UnityEngine::UIElements::UIR::RenderChain::OnFontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d1a2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnFontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.AppendTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement, UnityEngine::Texture, UnityEngine::UIElements::TextureId, bool)>(&UnityEngine::UIElements::UIR::RenderChain::AppendTexture)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d1a2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AppendTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.ResetTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::ResetTextures)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d16d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ResetTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.DrawStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::RenderChain::*)()>(&UnityEngine::UIElements::UIR::RenderChain::DrawStats)> {
  constexpr static std::size_t size = 0xe74;
  constexpr static std::size_t addrs = 0x2d17aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "DrawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChain.GetFirstElementInPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::VisualElement (*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d16cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetFirstElementInPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UIElements::UIR::RenderChain::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FirstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTracker(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking>(value));
}
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTracker() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_CommandPool(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand>>(value));
}
constexpr UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand> UnityEngine::UIElements::UIR::RenderChain::__get_m_CommandPool() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TexturePool(UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry>>(value));
}
constexpr UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> UnityEngine::UIElements::UIR::RenderChain::__get_m_TexturePool() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_RenderNodesData(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> UnityEngine::UIElements::UIR::RenderChain::__get_m_RenderNodesData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultWorldSpaceShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultMat(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultMat() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DefaultWorldSpaceMat(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UIR::RenderChain::__get_m_DefaultWorldSpaceMat() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_BlockDirtyRegistration(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChain::__get_m_BlockDirtyRegistration() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StaticIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_StaticIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_ActiveRenderNodes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_ActiveRenderNodes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_CustomMaterialCommands(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_CustomMaterialCommands() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_Stats(UnityEngine::UIElements::UIR::ChainBuilderStats value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::ChainBuilderStats, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::ChainBuilderStats>(value));
}
constexpr UnityEngine::UIElements::UIR::ChainBuilderStats UnityEngine::UIElements::UIR::RenderChain::__get_m_Stats() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::ChainBuilderStats, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StatsElementsAdded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsAdded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_StatsElementsRemoved(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_StatsElementsRemoved() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FirstTextElement(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChain::__get_m_FirstTextElement() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextUpdatePainter(UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter>(value));
}
constexpr UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter UnityEngine::UIElements::UIR::RenderChain::__get_m_TextUpdatePainter() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextElementCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_TextElementCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTextStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_DirtyTextRemaining(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChain::__get_m_DirtyTextRemaining() const {
return ::cordl_internals::getInstanceField<int32_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_FontWasReset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChain::__get_m_FontWasReset() const {
return ::cordl_internals::getInstanceField<bool, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_LastGroupTransformElementScale(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2> UnityEngine::UIElements::UIR::RenderChain::__get_m_LastGroupTransformElementScale() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_m_TextureRegistry(UnityEngine::UIElements::TextureRegistry value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextureRegistry, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::TextureRegistry>(value));
}
constexpr UnityEngine::UIElements::TextureRegistry UnityEngine::UIElements::UIR::RenderChain::__get_m_TextureRegistry() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextureRegistry, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerProcess(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerProcess()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerClipProcessing(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerClipProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerClipProcessing()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerClipProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerOpacityProcessing(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerOpacityProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerOpacityProcessing()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerOpacityProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerColorsProcessing(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerColorsProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerColorsProcessing()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerColorsProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerTransformProcessing(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerTransformProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerTransformProcessing()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerTransformProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerVisualsProcessing(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerVisualsProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerVisualsProcessing()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerVisualsProcessing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_s_MarkerTextRegen(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerTextRegen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChain::__get_s_MarkerTextRegen()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerTextRegen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__disposed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChain::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::RenderChain::__set_OnPreRender(System::Action value)  {
::cordl_internals::setStaticField<System::Action, "OnPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>(std::forward<System::Action>(value));
}
 System::Action UnityEngine::UIElements::UIR::RenderChain::__get_OnPreRender()  {
return ::cordl_internals::getStaticField<System::Action, "OnPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get>();
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__panel_k__BackingField(UnityEngine::UIElements::BaseVisualElementPanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseVisualElementPanel, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::BaseVisualElementPanel>(value));
}
constexpr UnityEngine::UIElements::BaseVisualElementPanel UnityEngine::UIElements::UIR::RenderChain::__get__panel_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseVisualElementPanel, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__device_k__BackingField(UnityEngine::UIElements::UIR::UIRenderDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UIRenderDevice, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UIRenderDevice>(value));
}
constexpr UnityEngine::UIElements::UIR::UIRenderDevice UnityEngine::UIElements::UIR::RenderChain::__get__device_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UIRenderDevice, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__atlas_k__BackingField(UnityEngine::UIElements::AtlasBase value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::AtlasBase, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::AtlasBase>(value));
}
constexpr UnityEngine::UIElements::AtlasBase UnityEngine::UIElements::UIR::RenderChain::__get__atlas_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::AtlasBase, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__vectorImageManager_k__BackingField(UnityEngine::UIElements::UIR::VectorImageManager value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::VectorImageManager, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::VectorImageManager>(value));
}
constexpr UnityEngine::UIElements::UIR::VectorImageManager UnityEngine::UIElements::UIR::RenderChain::__get__vectorImageManager_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::VectorImageManager, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set_shaderInfoAllocator(UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator>(value));
}
constexpr UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator UnityEngine::UIElements::UIR::RenderChain::__get_shaderInfoAllocator() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__painter_k__BackingField(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>(value));
}
constexpr UnityEngine::UIElements::UIR::Implementation::UIRStylePainter UnityEngine::UIElements::UIR::RenderChain::__get__painter_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__drawStats_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChain::__get__drawStats_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChain::__set__drawInCameras_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x221>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChain::__get__drawInCameras_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x221>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "panel", ty: "UnityEngine::UIElements::BaseVisualElementPanel", modifiers: "", def_value: None }]
 UnityEngine::UIElements::UIR::RenderChain::RenderChain(UnityEngine::UIElements::BaseVisualElementPanel panel)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RenderChain>(panel))) {}
 void UnityEngine::UIElements::UIR::RenderChain::_ctor(UnityEngine::UIElements::BaseVisualElementPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panel);
}
 void UnityEngine::UIElements::UIR::RenderChain::Constructor(UnityEngine::UIElements::BaseVisualElementPanel panelObj, UnityEngine::UIElements::UIR::UIRenderDevice deviceObj, UnityEngine::UIElements::AtlasBase atlas, UnityEngine::UIElements::UIR::VectorImageManager vectorImageMan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Constructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UIRenderDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AtlasBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::VectorImageManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panelObj, deviceObj, atlas, vectorImageMan);
}
 void UnityEngine::UIElements::UIR::RenderChain::Destructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Destructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::RenderChain::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_disposed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::RenderChain::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void UnityEngine::UIElements::UIR::RenderChain::ProcessChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ProcessChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::Render()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::ProcessTextRegen(bool timeSliced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ProcessTextRegen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeSliced);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildAdded(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildrenReordered(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildrenReordered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnChildRemoving(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnChildRemoving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::StopTrackingGroupTransformElement(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "StopTrackingGroupTransformElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnRenderHintsChanged(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnRenderHintsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnClippingChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnClippingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, hierarchical);
}
/// @param hierarchical: bool (default: false)
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnOpacityChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnOpacityChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, hierarchical);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnColorChanged(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnColorChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnTransformOrSizeChanged(UnityEngine::UIElements::VisualElement ve, bool transformChanged, bool clipRectSizeChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnTransformOrSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, transformChanged, clipRectSizeChanged);
}
 void UnityEngine::UIElements::UIR::RenderChain::UIEOnVisualsChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "UIEOnVisualsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, hierarchical);
}
 UnityEngine::UIElements::BaseVisualElementPanel UnityEngine::UIElements::UIR::RenderChain::get_panel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::BaseVisualElementPanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_panel(UnityEngine::UIElements::BaseVisualElementPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UIR::UIRenderDevice UnityEngine::UIElements::UIR::RenderChain::get_device()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::UIRenderDevice, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_device(UnityEngine::UIElements::UIR::UIRenderDevice value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_device",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UIRenderDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::AtlasBase UnityEngine::UIElements::UIR::RenderChain::get_atlas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::AtlasBase, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_atlas(UnityEngine::UIElements::AtlasBase value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AtlasBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UIR::VectorImageManager UnityEngine::UIElements::UIR::RenderChain::get_vectorImageManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_vectorImageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::VectorImageManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_vectorImageManager(UnityEngine::UIElements::UIR::VectorImageManager value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_vectorImageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::VectorImageManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::UIR::Implementation::UIRStylePainter UnityEngine::UIElements::UIR::RenderChain::get_painter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_painter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_painter(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_painter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::UIR::RenderChain::get_drawStats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_drawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_drawStats(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_drawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::UIR::RenderChain::get_drawInCameras()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "get_drawInCameras",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_drawInCameras(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_drawInCameras",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_defaultShader(UnityEngine::Shader value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_defaultShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Shader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::RenderChain::set_defaultWorldSpaceShader(UnityEngine::Shader value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "set_defaultWorldSpaceShader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Shader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Material UnityEngine::UIElements::UIR::RenderChain::GetStandardMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetStandardMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Material UnityEngine::UIElements::UIR::RenderChain::GetStandardWorldSpaceMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetStandardWorldSpaceMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::EnsureFitsDepth(int32_t depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "EnsureFitsDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, depth);
}
 void UnityEngine::UIElements::UIR::RenderChain::ChildWillBeRemoved(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ChildWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChain::AllocCommand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AllocCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::RenderChainCommand, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::FreeCommand(UnityEngine::UIElements::UIR::RenderChainCommand cmd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "FreeCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cmd);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandAdded(UnityEngine::UIElements::UIR::RenderChainCommand command)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderCommandAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, command);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnRenderCommandsRemoved(UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastCommand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderCommandsRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstCommand, lastCommand);
}
 void UnityEngine::UIElements::UIR::RenderChain::AddTextElement(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AddTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::RemoveTextElement(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "RemoveTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnGroupTransformElementChangedTransform(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnGroupTransformElementChangedTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData UnityEngine::UIElements::UIR::RenderChain::AccessRenderNodeData(::cordl_internals::intptr_t obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AccessRenderNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData, false>(nullptr, ___internal_method, obj);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnRenderNodeExecute(::cordl_internals::intptr_t obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRenderNodeExecute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRenderers(UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRegisterIntermediateRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnRegisterIntermediateRendererMat(UnityEngine::UIElements::BaseRuntimePanel rtp, UnityEngine::UIElements::UIR::RenderChain renderChain, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> rnd, UnityEngine::Camera camera, int32_t sameDistanceSortPriority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnRegisterIntermediateRendererMat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseRuntimePanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rtp, renderChain, rnd, camera, sameDistanceSortPriority);
}
 void UnityEngine::UIElements::UIR::RenderChain::RepaintTexturedElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "RepaintTexturedElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::RenderChain::OnFontReset(UnityEngine::Font font)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "OnFontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, font);
}
 void UnityEngine::UIElements::UIR::RenderChain::AppendTexture(UnityEngine::UIElements::VisualElement ve, UnityEngine::Texture src, UnityEngine::UIElements::TextureId id, bool isAtlas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "AppendTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, src, id, isAtlas);
}
 void UnityEngine::UIElements::UIR::RenderChain::ResetTextures(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "ResetTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::UIR::RenderChain::DrawStats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "DrawStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChain::GetFirstElementInPanel(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChain>::get(),
                            "GetFirstElementInPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(nullptr, ___internal_method, ve);
}
