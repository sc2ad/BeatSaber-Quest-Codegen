#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Diagnostics/Tracing/zzzz__EventAttribute_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(&::System::Diagnostics::Tracing::EventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x240dbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_EventId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(int32_t)>(&::System::Diagnostics::Tracing::EventAttribute::set_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240dc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_EventId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventLevel)>(&::System::Diagnostics::Tracing::EventAttribute::set_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240dc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Keywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventKeywords)>(&::System::Diagnostics::Tracing::EventAttribute::set_Keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240dc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventAttribute.set_Message
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventAttribute::*)(::StringW)>(&::System::Diagnostics::Tracing::EventAttribute::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240dc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Diagnostics::Tracing::EventAttribute::__set__EventId_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::Tracing::EventAttribute::__get__EventId_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Tracing::EventAttribute::__set__Level_k__BackingField(::System::Diagnostics::Tracing::EventLevel value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Tracing::EventLevel, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::Tracing::EventLevel>(value));
}
constexpr ::System::Diagnostics::Tracing::EventLevel ::System::Diagnostics::Tracing::EventAttribute::__get__Level_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Tracing::EventLevel, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Tracing::EventAttribute::__set__Keywords_k__BackingField(::System::Diagnostics::Tracing::EventKeywords value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Tracing::EventKeywords, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Diagnostics::Tracing::EventKeywords>(value));
}
constexpr ::System::Diagnostics::Tracing::EventKeywords ::System::Diagnostics::Tracing::EventAttribute::__get__Keywords_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Tracing::EventKeywords, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Diagnostics::Tracing::EventAttribute::__set__Message_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Diagnostics::Tracing::EventAttribute::__get__Message_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "eventId", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Diagnostics::Tracing::EventAttribute::EventAttribute(int32_t eventId)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<EventAttribute>(eventId))) {}
 void ::System::Diagnostics::Tracing::EventAttribute::_ctor(int32_t eventId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventId);
}
 void ::System::Diagnostics::Tracing::EventAttribute::set_EventId(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_EventId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Diagnostics::Tracing::EventAttribute::set_Level(::System::Diagnostics::Tracing::EventLevel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Diagnostics::Tracing::EventAttribute::set_Keywords(::System::Diagnostics::Tracing::EventKeywords value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Tracing::EventKeywords>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Diagnostics::Tracing::EventAttribute::set_Message(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventAttribute>::get(),
                            "set_Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
