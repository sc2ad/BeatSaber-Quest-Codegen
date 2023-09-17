#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c5c9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.ExecuteNonDrawMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(::UnityEngine::UIElements::UIR::DrawParams, float_t, ByRef<::System::Exception>)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x2c5b12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "ExecuteNonDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Blit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(::UnityEngine::Texture, ::UnityEngine::RenderTexture, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Blit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2c5cf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "Blit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.CombineScissorRects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2c5cdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "CombineScissorRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.RectPointsToPixelsAndFlipYAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectInt (*)(::UnityEngine::Rect, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2c5c9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "RectPointsToPixelsAndFlipYAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c5d0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_owner(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_owner() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_prev() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_next(::UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_next() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_closing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_closing() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_type(::UnityEngine::UIElements::UIR::CommandType value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::CommandType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::CommandType>(value));
}
constexpr ::UnityEngine::UIElements::UIR::CommandType ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::CommandType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_state(::UnityEngine::UIElements::UIR::State value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::State, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::State>(value));
}
constexpr ::UnityEngine::UIElements::UIR::State ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_state() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::State, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_mesh(::UnityEngine::UIElements::UIR::MeshHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::MeshHandle, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::MeshHandle>(value));
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::MeshHandle, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_indexOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_indexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_callback(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_k_ID_MainTex(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_k_ID_MainTex()  {
return ::cordl_internals::getStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get>();
}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::__set_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIR::RenderChainCommand::__get_s_ImmediateOverheadMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get>();
}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams drawParams, float_t pixelsPerPoint, ByRef<::System::Exception> immediateException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "ExecuteNonDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, drawParams, pixelsPerPoint, immediateException);
}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::Blit(::UnityEngine::Texture source, ::UnityEngine::RenderTexture destination, float_t depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "Blit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, destination, depth);
}
 ::UnityEngine::Rect ::UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects(::UnityEngine::Rect r0, ::UnityEngine::Rect r1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "CombineScissorRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, r0, r1);
}
 ::UnityEngine::RectInt ::UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect rect, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            "RectPointsToPixelsAndFlipYAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt, false>(nullptr, ___internal_method, rect, pixelsPerPoint);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::UIR::RenderChainCommand::RenderChainCommand()  : ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::RenderChainCommand>(THROW_UNLESS(::il2cpp_utils::New<RenderChainCommand>())) {}
 void ::UnityEngine::UIElements::UIR::RenderChainCommand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
