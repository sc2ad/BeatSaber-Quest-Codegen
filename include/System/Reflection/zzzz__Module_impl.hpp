#pragma once
namespace {
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/InteropServices/zzzz___Module_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__TypeFilter_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Module._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Module::*)()>(&::System::Reflection::Module::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237b960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.get_Assembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly (::System::Reflection::Module::*)()>(&::System::Reflection::Module::get_Assembly)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237b968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.get_ModuleVersionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Reflection::Module::*)()>(&::System::Reflection::Module::get_ModuleVersionId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237b990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.get_ScopeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Module::*)()>(&::System::Reflection::Module::get_ScopeName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237b9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.IsResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Module::*)()>(&::System::Reflection::Module::IsResource)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237b9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Module::*)(::System::Type, bool)>(&::System::Reflection::Module::IsDefined)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237ba08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Reflection::Module::*)(bool)>(&::System::Reflection::Module::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237ba30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Reflection::Module::*)(::System::Type, bool)>(&::System::Reflection::Module::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237ba58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Module::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::Module::GetObjectData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237ba80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Module::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::Module::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237baa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::Module::*)()>(&::System::Reflection::Module::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237bab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Module, ::System::Reflection::Module)>(&::System::Reflection::Module::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x237bab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Module::*)()>(&::System::Reflection::Module::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x237bae4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.FilterTypeNameImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type, ::bs_hook::Il2CppWrapperType)>(&::System::Reflection::Module::FilterTypeNameImpl)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x237baf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "FilterTypeNameImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.FilterTypeNameIgnoreCaseImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type, ::bs_hook::Il2CppWrapperType)>(&::System::Reflection::Module::FilterTypeNameIgnoreCaseImpl)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x237bc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "FilterTypeNameIgnoreCaseImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Module.GetModuleVersionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Reflection::Module::*)()>(&::System::Reflection::Module::GetModuleVersionId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x237bd88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::Module),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Reflection::ICustomAttributeProvider
constexpr  ::System::Reflection::Module::operator ::System::Reflection::ICustomAttributeProvider() const noexcept {
return ::System::Reflection::ICustomAttributeProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Reflection::Module::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::InteropServices::_Module
constexpr  ::System::Reflection::Module::operator ::System::Runtime::InteropServices::_Module() const noexcept {
return ::System::Runtime::InteropServices::_Module(::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Reflection::Module::__set_FilterTypeName(::System::Reflection::TypeFilter value)  {
::cordl_internals::setStaticField<::System::Reflection::TypeFilter, "FilterTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get>(std::forward<::System::Reflection::TypeFilter>(value));
}
 ::System::Reflection::TypeFilter ::System::Reflection::Module::__get_FilterTypeName()  {
return ::cordl_internals::getStaticField<::System::Reflection::TypeFilter, "FilterTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get>();
}
 void ::System::Reflection::Module::__set_FilterTypeNameIgnoreCase(::System::Reflection::TypeFilter value)  {
::cordl_internals::setStaticField<::System::Reflection::TypeFilter, "FilterTypeNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get>(std::forward<::System::Reflection::TypeFilter>(value));
}
 ::System::Reflection::TypeFilter ::System::Reflection::Module::__get_FilterTypeNameIgnoreCase()  {
return ::cordl_internals::getStaticField<::System::Reflection::TypeFilter, "FilterTypeNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get>();
}
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::Module::DefaultLookup{28};
// Ctor Parameters []
 ::System::Reflection::Module::Module()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Module>())) {}
 void ::System::Reflection::Module::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Reflection::Assembly ::System::Reflection::Module::get_Assembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "get_Assembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Guid ::System::Reflection::Module::get_ModuleVersionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "get_ModuleVersionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Reflection::Module::get_ScopeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "get_ScopeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Reflection::Module::IsResource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "IsResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Reflection::Module::IsDefined(::System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Reflection::Module::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Reflection::Module::GetCustomAttributes(::System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 void ::System::Reflection::Module::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool ::System::Reflection::Module::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 int32_t ::System::Reflection::Module::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Reflection::Module::op_Equality(::System::Reflection::Module left, ::System::Reflection::Module right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 ::StringW ::System::Reflection::Module::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Reflection::Module::FilterTypeNameImpl(::System::Type cls, ::bs_hook::Il2CppWrapperType filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "FilterTypeNameImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cls, filterCriteria);
}
 bool ::System::Reflection::Module::FilterTypeNameIgnoreCaseImpl(::System::Type cls, ::bs_hook::Il2CppWrapperType filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "FilterTypeNameIgnoreCaseImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cls, filterCriteria);
}
 ::System::Guid ::System::Reflection::Module::GetModuleVersionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Module>::get(),
                            "GetModuleVersionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
