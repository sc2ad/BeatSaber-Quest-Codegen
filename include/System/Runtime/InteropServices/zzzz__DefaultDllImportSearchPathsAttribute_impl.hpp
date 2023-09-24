#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DefaultDllImportSearchPathsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
//  Writing Method size for method: System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::*)(System::Runtime::InteropServices::DllImportSearchPath)>(&System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236acb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::DllImportSearchPath>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__set__paths(System::Runtime::InteropServices::DllImportSearchPath value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::DllImportSearchPath, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::DllImportSearchPath>(value));
}
constexpr System::Runtime::InteropServices::DllImportSearchPath System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__get__paths() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::DllImportSearchPath, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::New_ctor(System::Runtime::InteropServices::DllImportSearchPath paths)  {
System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute>(paths))};
return o;
}
 void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor(System::Runtime::InteropServices::DllImportSearchPath paths)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::DllImportSearchPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, paths);
}
