#pragma once
#include "System/zzzz__GC_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
//  Writing Method size for method: System::GC.GetCollectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::GC::GetCollectionCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24797c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetCollectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.GetMaxGeneration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::GC::GetMaxGeneration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24797cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetMaxGeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.InternalCollect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::GC::InternalCollect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24797d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "InternalCollect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.register_ephemeron_array
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<System::Runtime::CompilerServices::Ephemeron>)>(&System::GC::register_ephemeron_array)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24797d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "register_ephemeron_array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::CompilerServices::Ephemeron>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.get_ephemeron_tombstone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&System::GC::get_ephemeron_tombstone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24797d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "get_ephemeron_tombstone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.GetMemoryInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint32_t>, ByRef<uint64_t>, ByRef<uint32_t>, ByRef<::cordl_internals::uintptr_t>, ByRef<::cordl_internals::uintptr_t>)>(&System::GC::GetMemoryInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24797dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetMemoryInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::uintptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::uintptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::GC::Collect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2479874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.CollectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::GC::CollectionCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2479910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "CollectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::GC::KeepAlive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24799d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.get_MaxGeneration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::GC::get_MaxGeneration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24798c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "get_MaxGeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC._SuppressFinalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::GC::_SuppressFinalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24799d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "_SuppressFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.SuppressFinalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::GC::SuppressFinalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24799d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "SuppressFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC._ReRegisterForFinalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::GC::_ReRegisterForFinalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2479a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "_ReRegisterForFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::GC.ReRegisterForFinalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::GC::ReRegisterForFinalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2479a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "ReRegisterForFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::GC::__set_EPHEMERON_TOMBSTONE(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "EPHEMERON_TOMBSTONE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::GC::__get_EPHEMERON_TOMBSTONE()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "EPHEMERON_TOMBSTONE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get>();
}
 int32_t System::GC::GetCollectionCount(int32_t generation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetCollectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, generation);
}
 int32_t System::GC::GetMaxGeneration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetMaxGeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::GC::InternalCollect(int32_t generation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "InternalCollect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, generation);
}
 void System::GC::register_ephemeron_array(::ArrayW<System::Runtime::CompilerServices::Ephemeron> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "register_ephemeron_array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::CompilerServices::Ephemeron>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
 ::bs_hook::Il2CppWrapperType System::GC::get_ephemeron_tombstone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "get_ephemeron_tombstone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 void System::GC::GetMemoryInfo(ByRef<uint32_t> highMemLoadThreshold, ByRef<uint64_t> totalPhysicalMem, ByRef<uint32_t> lastRecordedMemLoad, ByRef<::cordl_internals::uintptr_t> lastRecordedHeapSize, ByRef<::cordl_internals::uintptr_t> lastRecordedFragmentation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "GetMemoryInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::uintptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::uintptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, highMemLoadThreshold, totalPhysicalMem, lastRecordedMemLoad, lastRecordedHeapSize, lastRecordedFragmentation);
}
 void System::GC::Collect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 int32_t System::GC::CollectionCount(int32_t generation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "CollectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, generation);
}
 void System::GC::KeepAlive(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 int32_t System::GC::get_MaxGeneration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "get_MaxGeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::GC::_SuppressFinalize(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "_SuppressFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
 void System::GC::SuppressFinalize(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "SuppressFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 void System::GC::_ReRegisterForFinalize(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "_ReRegisterForFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
 void System::GC::ReRegisterForFinalize(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::GC>::get(),
                            "ReRegisterForFinalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
