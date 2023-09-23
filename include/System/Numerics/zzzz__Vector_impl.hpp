#pragma once
#include "System/Numerics/zzzz__Vector_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
//  Writing Method size for method: System::Numerics::Vector.get_IsHardwareAccelerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Numerics::Vector::get_IsHardwareAccelerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238ec2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector>::get(),
                            "get_IsHardwareAccelerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
template<typename T>
 System::Numerics::Vector_1<T> System::Numerics::Vector::Equals(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector>::get(),
                        "Equals",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method, left, right);
}
 bool System::Numerics::Vector::get_IsHardwareAccelerated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector>::get(),
                            "get_IsHardwareAccelerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template<typename T>
 System::Numerics::Vector_1<uint64_t> System::Numerics::Vector::AsVectorUInt64(System::Numerics::Vector_1<T> value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Numerics::Vector>::get(),
                        "AsVectorUInt64",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Numerics::Vector_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
