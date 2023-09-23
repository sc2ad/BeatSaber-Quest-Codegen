#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::VectorImageRenderInfo.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(&UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c54350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::VectorImageRenderInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::VectorImageRenderInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::VectorImageRenderInfo::*)()>(&UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c542e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::VectorImageRenderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_useCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_useCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_firstGradientRemap(UnityEngine::UIElements::UIR::GradientRemap value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::GradientRemap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::GradientRemap>(value));
}
constexpr UnityEngine::UIElements::UIR::GradientRemap UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_firstGradientRemap() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::GradientRemap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::VectorImageRenderInfo::__set_gradientSettingsAlloc(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::VectorImageRenderInfo::__get_gradientSettingsAlloc() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::VectorImageRenderInfo::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::VectorImageRenderInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::UIR::VectorImageRenderInfo::VectorImageRenderInfo()  : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::VectorImageRenderInfo>(THROW_UNLESS(::il2cpp_utils::New<VectorImageRenderInfo>())) {}
 void UnityEngine::UIElements::UIR::VectorImageRenderInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::VectorImageRenderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
