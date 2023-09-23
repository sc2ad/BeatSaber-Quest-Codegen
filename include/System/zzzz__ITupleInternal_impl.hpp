#pragma once
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
//  Writing Method size for method: System::ITupleInternal.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ITupleInternal::*)(System::Text::StringBuilder)>(&System::ITupleInternal::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ITupleInternal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ITupleInternal>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ITuple
constexpr  System::ITupleInternal::operator System::Runtime::CompilerServices::ITuple() const noexcept {
return System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::ITupleInternal::ToString(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ITupleInternal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, sb);
}
