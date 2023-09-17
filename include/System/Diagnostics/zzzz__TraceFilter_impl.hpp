#pragma once
namespace {
#include "System/Diagnostics/zzzz__TraceFilter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache, ::StringW, ::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Diagnostics::TraceFilter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache, ::StringW, ::System::Diagnostics::TraceEventType, int32_t, ::StringW)>(&::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27dae44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter>::get(),
                            "ShouldTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::bs_hook::Il2CppWrapperType data1, ::ArrayW<::bs_hook::Il2CppWrapperType> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter>::get(),
                            "ShouldTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cache, source, eventType, id, formatOrMessage, args, data1, data);
}
 bool ::System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter>::get(),
                            "ShouldTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cache, source, eventType, id, formatOrMessage);
}
} // end anonymous namespace
