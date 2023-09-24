#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
constexpr void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 T1 GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, protocolVersion);
}
 void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, protocolVersion);
}
 GlobalNamespace::IRemoteProcedureCall GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::Init(float_t syncTime, float_t value0, T1 value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IRemoteProcedureCall, false>(const_cast<void*>(instance), ___internal_method, syncTime, value0, value1);
}
 void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::RemoteProcedureCall_2<float_t,T1> GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::New_ctor()  {
GlobalNamespace::RemoteProcedureCall_2<float_t,T1> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>())};
return o;
}
 void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<float_t,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T0 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(const_cast<void*>(instance), ___internal_method);
}
 T1 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, protocolVersion);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, protocolVersion);
}
 GlobalNamespace::IRemoteProcedureCall GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Init(float_t syncTime, T0 value0, T1 value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IRemoteProcedureCall, false>(const_cast<void*>(instance), ___internal_method, syncTime, value0, value1);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::RemoteProcedureCall_2<T0,T1> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::New_ctor()  {
GlobalNamespace::RemoteProcedureCall_2<T0,T1> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>())};
return o;
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T0 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(const_cast<void*>(instance), ___internal_method);
}
 T1 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, protocolVersion);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, protocolVersion);
}
 GlobalNamespace::IRemoteProcedureCall GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Init(float_t syncTime, T0 value0, T1 value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IRemoteProcedureCall, false>(const_cast<void*>(instance), ___internal_method, syncTime, value0, value1);
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::RemoteProcedureCall_2<T0,T1> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::New_ctor()  {
GlobalNamespace::RemoteProcedureCall_2<T0,T1> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>())};
return o;
}
 void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall_2<T0,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
