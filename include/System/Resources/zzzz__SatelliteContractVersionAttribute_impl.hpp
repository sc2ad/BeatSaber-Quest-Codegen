#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__SatelliteContractVersionAttribute_def.hpp"
//  Writing Method size for method: System::Resources::SatelliteContractVersionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::SatelliteContractVersionAttribute::*)(::StringW)>(&System::Resources::SatelliteContractVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2372da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::SatelliteContractVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::SatelliteContractVersionAttribute::__set__Version_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Resources::SatelliteContractVersionAttribute::__get__Version_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Resources::SatelliteContractVersionAttribute System::Resources::SatelliteContractVersionAttribute::New_ctor(::StringW version)  {
System::Resources::SatelliteContractVersionAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Resources::SatelliteContractVersionAttribute>(version))};
return o;
}
 void System::Resources::SatelliteContractVersionAttribute::_ctor(::StringW version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::SatelliteContractVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, version);
}
