#pragma once
#include "GlobalNamespace/zzzz__LightTransformGroup_3_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightRotationGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroup::*)()>(&::GlobalNamespace::LightRotationGroup::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x225e81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::LightRotationGroup::LightRotationGroup()  : ::GlobalNamespace::LightTransformGroup_3<::GlobalNamespace::LightGroupRotationXTransform,::GlobalNamespace::LightGroupRotationYTransform,::GlobalNamespace::LightGroupRotationZTransform>(THROW_UNLESS(::il2cpp_utils::New<LightRotationGroup>())) {}
 void ::GlobalNamespace::LightRotationGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
