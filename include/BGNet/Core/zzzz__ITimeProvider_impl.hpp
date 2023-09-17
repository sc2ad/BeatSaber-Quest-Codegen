#pragma once
namespace {
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTimeMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Core::ITimeProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Core::ITimeProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 int64_t ::BGNet::Core::ITimeProvider::GetTimeMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider>::get(),
                            "GetTimeMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::BGNet::Core::ITimeProvider::GetTicks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::ITimeProvider>::get(),
                            "GetTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
