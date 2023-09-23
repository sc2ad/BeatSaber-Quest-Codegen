#pragma once
#include "GlobalNamespace/zzzz__MissionDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionDataExtensions.Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType)>(&GlobalNamespace::MissionDataExtensions::Name)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21f1140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionDataExtensions>::get(),
                            "Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::MissionDataExtensions::Name(GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType comparisonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionDataExtensions>::get(),
                            "Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, comparisonType);
}
