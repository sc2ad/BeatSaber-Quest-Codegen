#pragma once
#include "Unity/XR/Oculus/Input/zzzz__GearVRTrackedController_impl.hpp"
namespace {
#include "Unity/XR/Oculus/Input/zzzz__OculusGoController_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusGoController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::Input::OculusGoController::*)()>(&::Unity::XR::Oculus::Input::OculusGoController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae41fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Input::OculusGoController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Unity::XR::Oculus::Input::OculusGoController::OculusGoController()  : ::Unity::XR::Oculus::Input::GearVRTrackedController(THROW_UNLESS(::il2cpp_utils::New<OculusGoController>())) {}
 void ::Unity::XR::Oculus::Input::OculusGoController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Input::OculusGoController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace