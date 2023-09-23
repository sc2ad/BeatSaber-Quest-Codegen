#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Vector3MagnitudeComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x297c7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<UnityEngine::Vector3>
constexpr  UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::operator System::Collections::Generic::IComparer_1<UnityEngine::Vector3>() const {
return System::Collections::Generic::IComparer_1<UnityEngine::Vector3>(::cordl_internals::Box(this).convert());
}
 int32_t UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer::Compare(UnityEngine::Vector3 x, UnityEngine::Vector3 y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Vector3MagnitudeComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y);
}
