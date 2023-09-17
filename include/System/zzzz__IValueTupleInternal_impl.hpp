#pragma once
namespace {
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
//  Writing Method size for method: ::System::IValueTupleInternal.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IValueTupleInternal::*)(::System::Collections::IEqualityComparer)>(&::System::IValueTupleInternal::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IValueTupleInternal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IValueTupleInternal.ToStringEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IValueTupleInternal::*)()>(&::System::IValueTupleInternal::ToStringEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IValueTupleInternal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::ITuple
constexpr  ::System::IValueTupleInternal::operator ::System::Runtime::CompilerServices::ITuple() const noexcept {
return ::System::Runtime::CompilerServices::ITuple(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::System::IValueTupleInternal::GetHashCode(::System::Collections::IEqualityComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 ::StringW ::System::IValueTupleInternal::ToStringEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IValueTupleInternal>::get(),
                            "ToStringEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
