#pragma once
namespace {
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.GetBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::SmallBufferPool::*)(int32_t)>(&::GlobalNamespace::SmallBufferPool::GetBuffer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xdc9b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "GetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdc9e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(ByRef<::ArrayW<uint8_t>>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdc9fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBufferInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBufferInternal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xdc9e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBufferInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)()>(&::GlobalNamespace::SmallBufferPool::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdc9fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SmallBufferPool::__set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> ::GlobalNamespace::SmallBufferPool::__get__cacheSmall() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SmallBufferPool::__set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> ::GlobalNamespace::SmallBufferPool::__get__cacheMedium() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SmallBufferPool::__set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> ::GlobalNamespace::SmallBufferPool::__get__cacheLarge() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SmallBufferPool::__set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> ::GlobalNamespace::SmallBufferPool::__get__cacheMax() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SmallBufferPool::__set_instance(::GlobalNamespace::SmallBufferPool value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SmallBufferPool, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get>(std::forward<::GlobalNamespace::SmallBufferPool>(value));
}
 ::GlobalNamespace::SmallBufferPool ::GlobalNamespace::SmallBufferPool::__get_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SmallBufferPool, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get>();
}
 ::ArrayW<uint8_t> ::GlobalNamespace::SmallBufferPool::GetBuffer(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "GetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, length);
}
 void ::GlobalNamespace::SmallBufferPool::ReleaseBuffer(::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void ::GlobalNamespace::SmallBufferPool::ReleaseBuffer(ByRef<::ArrayW<uint8_t>> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void ::GlobalNamespace::SmallBufferPool::ReleaseBufferInternal(::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            "ReleaseBufferInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
// Ctor Parameters []
 ::GlobalNamespace::SmallBufferPool::SmallBufferPool()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SmallBufferPool>())) {}
 void ::GlobalNamespace::SmallBufferPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
