#pragma once
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::HMAutoincrementedRequestId.get_RequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::HMAutoincrementedRequestId::*)()>(&GlobalNamespace::HMAutoincrementedRequestId::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7887c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "get_RequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HMAutoincrementedRequestId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAutoincrementedRequestId::*)()>(&GlobalNamespace::HMAutoincrementedRequestId::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1f786ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HMAutoincrementedRequestId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAutoincrementedRequestId::*)(GlobalNamespace::HMAutoincrementedRequestId)>(&GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1f78884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HMAutoincrementedRequestId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HMAutoincrementedRequestId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAutoincrementedRequestId::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1f788a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HMAutoincrementedRequestId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HMAutoincrementedRequestId.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::HMAutoincrementedRequestId::*)()>(&GlobalNamespace::HMAutoincrementedRequestId::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f7895c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HMAutoincrementedRequestId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId>
constexpr  GlobalNamespace::HMAutoincrementedRequestId::operator System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId>() const noexcept {
return System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId>(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HMAutoincrementedRequestId::__set__nextRequestId(uint64_t value)  {
::cordl_internals::setStaticField<uint64_t, "_nextRequestId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get>(std::forward<uint64_t>(value));
}
 uint64_t GlobalNamespace::HMAutoincrementedRequestId::__get__nextRequestId()  {
return ::cordl_internals::getStaticField<uint64_t, "_nextRequestId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get>();
}
constexpr void GlobalNamespace::HMAutoincrementedRequestId::__set__requestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::HMAutoincrementedRequestId::__get__requestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint64_t GlobalNamespace::HMAutoincrementedRequestId::get_RequestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "get_RequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::HMAutoincrementedRequestId GlobalNamespace::HMAutoincrementedRequestId::New_ctor()  {
GlobalNamespace::HMAutoincrementedRequestId o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::HMAutoincrementedRequestId>())};
return o;
}
 void GlobalNamespace::HMAutoincrementedRequestId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::HMAutoincrementedRequestId::Equals(GlobalNamespace::HMAutoincrementedRequestId obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HMAutoincrementedRequestId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool GlobalNamespace::HMAutoincrementedRequestId::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t GlobalNamespace::HMAutoincrementedRequestId::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMAutoincrementedRequestId>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
