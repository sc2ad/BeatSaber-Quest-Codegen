#pragma once
#include "UnityEngine/Timeline/zzzz__AnimationPreviewUpdateCallback_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)(UnityEngine::Animations::AnimationPlayableOutput)>(&UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ab7f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback.Evaluate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(&UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ab8064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback.FetchPreviewComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(&UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2ab8238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            "FetchPreviewComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Timeline::ITimelineEvaluateCallback
constexpr  UnityEngine::Timeline::AnimationPreviewUpdateCallback::operator UnityEngine::Timeline::ITimelineEvaluateCallback() const noexcept {
return UnityEngine::Timeline::ITimelineEvaluateCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::AnimationPreviewUpdateCallback::__set_m_Output(UnityEngine::Animations::AnimationPlayableOutput value)  {
::cordl_internals::setInstanceField<UnityEngine::Animations::AnimationPlayableOutput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animations::AnimationPlayableOutput>(value));
}
constexpr UnityEngine::Animations::AnimationPlayableOutput UnityEngine::Timeline::AnimationPreviewUpdateCallback::__get_m_Output() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animations::AnimationPlayableOutput, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::AnimationPreviewUpdateCallback::__set_m_Graph(UnityEngine::Playables::PlayableGraph value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableGraph, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Playables::PlayableGraph>(value));
}
constexpr UnityEngine::Playables::PlayableGraph UnityEngine::Timeline::AnimationPreviewUpdateCallback::__get_m_Graph() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableGraph, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::AnimationPreviewUpdateCallback::__set_m_PreviewComponents(System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview> UnityEngine::Timeline::AnimationPreviewUpdateCallback::__get_m_PreviewComponents() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Animations::IAnimationWindowPreview>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "output", ty: "UnityEngine::Animations::AnimationPlayableOutput", modifiers: "", def_value: None }]
 UnityEngine::Timeline::AnimationPreviewUpdateCallback::AnimationPreviewUpdateCallback(UnityEngine::Animations::AnimationPlayableOutput output)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AnimationPreviewUpdateCallback>(output))) {}
 void UnityEngine::Timeline::AnimationPreviewUpdateCallback::_ctor(UnityEngine::Animations::AnimationPlayableOutput output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 void UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AnimationPreviewUpdateCallback>::get(),
                            "FetchPreviewComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
