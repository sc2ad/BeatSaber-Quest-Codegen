#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Collections/Concurrent/zzzz__CDSCollectionETWBCLProvider_def.hpp"
//  Writing Method size for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x241dde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentDictionary_AcquiringAllLocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)(int32_t)>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x241dde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentDictionary_AcquiringAllLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::__set_Log(System::Collections::Concurrent::CDSCollectionETWBCLProvider value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::CDSCollectionETWBCLProvider, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get>(std::forward<System::Collections::Concurrent::CDSCollectionETWBCLProvider>(value));
}
 System::Collections::Concurrent::CDSCollectionETWBCLProvider System::Collections::Concurrent::CDSCollectionETWBCLProvider::__get_Log()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::CDSCollectionETWBCLProvider, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get>();
}
// Ctor Parameters []
 System::Collections::Concurrent::CDSCollectionETWBCLProvider::CDSCollectionETWBCLProvider()  : System::Diagnostics::Tracing::EventSource(THROW_UNLESS(::il2cpp_utils::New<CDSCollectionETWBCLProvider>())) {}
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks(int32_t numOfBuckets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::CDSCollectionETWBCLProvider>::get(),
                            "ConcurrentDictionary_AcquiringAllLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numOfBuckets);
}
