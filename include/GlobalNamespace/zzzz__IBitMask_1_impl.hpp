#pragma once
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to System::IEquatable_1<T>
constexpr  GlobalNamespace::IBitMask_1::operator System::IEquatable_1<T>() const noexcept {
return System::IEquatable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::IBitMask_1::get_bitCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBitMask_1>::get(),
                            "get_bitCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::IBitMask_1::SetBits(int32_t offset, uint64_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBitMask_1>::get(),
                            "SetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, offset, bits);
}
 uint64_t GlobalNamespace::IBitMask_1::GetBits(int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBitMask_1>::get(),
                            "GetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, offset, count);
}
