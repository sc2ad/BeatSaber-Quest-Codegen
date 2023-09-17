#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (*)()>(&::LIV::SDK::Unity::SDKOutputFrame::get_empty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x209d6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKOutputFrame::*)()>(&::LIV::SDK::Unity::SDKOutputFrame::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20a2d94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LIV::SDK::Unity::SDKOutputFrame),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpace", ty: "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKOutputFrame::SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept : ::bs_hook::ValueTypeWrapper() {this->renderingPipeline = renderingPipeline;
this->trackedSpace = trackedSpace;
}
constexpr void ::LIV::SDK::Unity::SDKOutputFrame::__set_renderingPipeline(::LIV::SDK::Unity::RENDERING_PIPELINE value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::RENDERING_PIPELINE, 0x0>(this->__instance, std::forward<::LIV::SDK::Unity::RENDERING_PIPELINE>(value));
}
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE ::LIV::SDK::Unity::SDKOutputFrame::__get_renderingPipeline() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::RENDERING_PIPELINE, 0x0>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKOutputFrame::__set_trackedSpace(::LIV::SDK::Unity::SDKTrackedSpace value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKTrackedSpace, 0x4>(this->__instance, std::forward<::LIV::SDK::Unity::SDKTrackedSpace>(value));
}
constexpr ::LIV::SDK::Unity::SDKTrackedSpace ::LIV::SDK::Unity::SDKOutputFrame::__get_trackedSpace() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKTrackedSpace, 0x4>(this->__instance);
}
 ::LIV::SDK::Unity::SDKOutputFrame ::LIV::SDK::Unity::SDKOutputFrame::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame, false>(nullptr, ___internal_method);
}
 ::StringW ::LIV::SDK::Unity::SDKOutputFrame::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
