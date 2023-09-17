#pragma once
namespace {
#include "System/Numerics/Hashing/zzzz__HashHelpers_def.hpp"
//  Writing Method size for method: ::System::Numerics::Hashing::HashHelpers.Combine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Numerics::Hashing::HashHelpers::Combine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x238ec34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers>::get(),
                            "Combine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Numerics::Hashing::HashHelpers::__set_RandomSeed(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "RandomSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Numerics::Hashing::HashHelpers::__get_RandomSeed()  {
return ::cordl_internals::getStaticField<int32_t, "RandomSeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers>::get>();
}
 int32_t ::System::Numerics::Hashing::HashHelpers::Combine(int32_t h1, int32_t h2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Hashing::HashHelpers>::get(),
                            "Combine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2);
}
} // end anonymous namespace
