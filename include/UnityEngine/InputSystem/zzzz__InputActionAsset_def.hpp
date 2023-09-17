#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__DeviceArray;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlScheme__SchemeJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__WriteMapJson;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson;
}
// Type: ::WriteFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6218))
// CS Name: UnityEngine.InputSystem.InputActionAsset::WriteFileJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson>", modifiers: "", def_value: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> maps, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> controlSchemes) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson(____UnityEngine__InputSystem__InputActionAsset__WriteFileJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson(____UnityEngine__InputSystem__InputActionAsset__WriteFileJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson& operator=(____UnityEngine__InputSystem__InputActionAsset__WriteFileJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson& operator=(____UnityEngine__InputSystem__InputActionAsset__WriteFileJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionAsset__WriteFileJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__WriteMapJson> __get_maps() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> __declspec(property(get=__get_controlSchemes, put=__set_controlSchemes))  controlSchemes;

constexpr void __set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> __get_controlSchemes() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ReadFileJson
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6219))
// CS Name: UnityEngine.InputSystem.InputActionAsset::ReadFileJson
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson>", modifiers: "", def_value: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> maps, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> controlSchemes) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson(____UnityEngine__InputSystem__InputActionAsset__ReadFileJson const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson(____UnityEngine__InputSystem__InputActionAsset__ReadFileJson&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson& operator=(____UnityEngine__InputSystem__InputActionAsset__ReadFileJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson& operator=(____UnityEngine__InputSystem__InputActionAsset__ReadFileJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionAsset__ReadFileJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__ReadMapJson> __get_maps() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> __declspec(property(get=__get_controlSchemes, put=__set_controlSchemes))  controlSchemes;

constexpr void __set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__SchemeJson> __get_controlSchemes() const;


// Methods

/// @brief Method ToAsset addr 0x28a7284 size 0xa4 virtual false final false
 void ToAsset(::UnityEngine::InputSystem::InputActionAsset asset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<get_bindings>d__8
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6220))
// CS Name: UnityEngine.InputSystem.InputActionAsset::<get_bindings>d__8
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8(____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8(____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8& operator=(____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8& operator=(____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::InputSystem::InputBinding value) ;

constexpr ::UnityEngine::InputSystem::InputBinding __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get___4__this() const;

 int32_t __declspec(property(get=__get__numActionMaps_5__2, put=__set__numActionMaps_5__2))  _numActionMaps_5__2;

constexpr void __set__numActionMaps_5__2(int32_t value) ;

constexpr int32_t __get__numActionMaps_5__2() const;

 int32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(int32_t value) ;

constexpr int32_t __get__i_5__3() const;

 ::ArrayW<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get__bindings_5__4, put=__set__bindings_5__4))  _bindings_5__4;

constexpr void __set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> __get__bindings_5__4() const;

 int32_t __declspec(property(get=__get__numBindings_5__5, put=__set__numBindings_5__5))  _numBindings_5__5;

constexpr void __set__numBindings_5__5(int32_t value) ;

constexpr int32_t __get__numBindings_5__5() const;

 int32_t __declspec(property(get=__get__n_5__6, put=__set__n_5__6))  _n_5__6;

constexpr void __set__n_5__6(int32_t value) ;

constexpr int32_t __get__n_5__6() const;


// Properties

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28a6570 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28a9924 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28a9928 size 0x14c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current addr 0x28a9a74 size 0x10 virtual true final true
 ::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28a9a84 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28a9ac4 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator addr 0x28a9b28 size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28a9bcc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<GetEnumerator>d__31
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6221))
// CS Name: UnityEngine.InputSystem.InputActionAsset::<GetEnumerator>d__31
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31(____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31(____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31& operator=(____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31& operator=(____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get___2__current() const;

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> __declspec(property(get=__get__actions_5__3, put=__set__actions_5__3))  _actions_5__3;

constexpr void __set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction> __get__actions_5__3() const;

 int32_t __declspec(property(get=__get__actionCount_5__4, put=__set__actionCount_5__4))  _actionCount_5__4;

constexpr void __set__actionCount_5__4(int32_t value) ;

constexpr int32_t __get__actionCount_5__4() const;

 int32_t __declspec(property(get=__get__n_5__5, put=__set__n_5__5))  _n_5__5;

constexpr void __set__n_5__5(int32_t value) ;

constexpr int32_t __get__n_5__5() const;


// Properties

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28a82fc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28a9bd0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28a9bd4 size 0x11c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current addr 0x28a9d50 size 0x8 virtual true final true
 ::UnityEngine::InputSystem::InputAction System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28a9d58 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28a9d98 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionAsset
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6222))
// CS Name: UnityEngine.InputSystem.InputActionAsset
class CORDL_TYPE InputActionAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using _GetEnumerator_d__31 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31;

using _get_bindings_d__8 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8;

using ReadFileJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson;

using WriteFileJson = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection2
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection2() const noexcept;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection
constexpr operator  ::UnityEngine::InputSystem::IInputActionCollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~InputActionAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: " const&", def_value: None }]
constexpr InputActionAsset(InputActionAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "&&", def_value: None }]
constexpr InputActionAsset(InputActionAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionAsset(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr InputActionAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionAsset& operator=(InputActionAsset&& o) noexcept = default;
  constexpr InputActionAsset& operator=(InputActionAsset const& o) noexcept = default;
                


// Fields

/// @brief Field Extension offset 0
static constexpr ::ConstString  Extension{u"inputactions"};

 ::ArrayW<::UnityEngine::InputSystem::InputActionMap> __declspec(property(get=__get_m_ActionMaps, put=__set_m_ActionMaps))  m_ActionMaps;

constexpr void __set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap> __get_m_ActionMaps() const;

 ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=__get_m_ControlSchemes, put=__set_m_ControlSchemes))  m_ControlSchemes;

constexpr void __set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> __get_m_ControlSchemes() const;

 ::UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_SharedStateForAllMaps, put=__set_m_SharedStateForAllMaps))  m_SharedStateForAllMaps;

constexpr void __set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState value) ;

constexpr ::UnityEngine::InputSystem::InputActionState __get_m_SharedStateForAllMaps() const;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask))  m_BindingMask;

constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __get_m_BindingMask() const;

 int32_t __declspec(property(get=__get_m_ParameterOverridesCount, put=__set_m_ParameterOverridesCount))  m_ParameterOverridesCount;

constexpr void __set_m_ParameterOverridesCount(int32_t value) ;

constexpr int32_t __get_m_ParameterOverridesCount() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> __declspec(property(get=__get_m_ParameterOverrides, put=__set_m_ParameterOverrides))  m_ParameterOverrides;

constexpr void __set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> __get_m_ParameterOverrides() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray __declspec(property(get=__get_m_Devices, put=__set_m_Devices))  m_Devices;

constexpr void __set_m_Devices(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__DeviceArray __get_m_Devices() const;


// Properties

 bool __declspec(property(get=get_enabled))  enabled;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap> __declspec(property(get=get_actionMaps))  actionMaps;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=get_controlSchemes))  controlSchemes;

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindings))  bindings;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask, put=set_bindingMask))  bindingMask;

 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> __declspec(property(get=get_devices, put=set_devices))  devices;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_enabled addr 0x28a6290 size 0x198 virtual false final false
 bool get_enabled() ;

/// @brief Method get_actionMaps addr 0x28a6428 size 0x60 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap> get_actionMaps() ;

/// @brief Method get_controlSchemes addr 0x28a6498 size 0x60 virtual true final true
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes() ;

/// @brief Method get_bindings addr 0x28a64f8 size 0x78 virtual true final true
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> get_bindings() ;

/// @brief Method get_bindingMask addr 0x28a65a4 size 0x10 virtual true final true
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method set_bindingMask addr 0x28a65b4 size 0x13c virtual true final true
 void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

/// @brief Method get_devices addr 0x28a6730 size 0x34 virtual true final true
 ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> get_devices() ;

/// @brief Method set_devices addr 0x28a680c size 0x44 virtual true final true
 void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice>> value) ;

/// @brief Method get_Item addr 0x28a69cc size 0x88 virtual false final false
 ::UnityEngine::InputSystem::InputAction get_Item(::StringW actionNameOrId) ;

/// @brief Method ToJson addr 0x28a6d84 size 0x9c virtual false final false
 ::StringW ToJson() ;

/// @brief Method LoadFromJson addr 0x28a71a8 size 0xdc virtual false final false
 void LoadFromJson(::StringW json) ;

/// @brief Method FromJson addr 0x28a7328 size 0xbc virtual false final false
static ::UnityEngine::InputSystem::InputActionAsset FromJson(::StringW json) ;

/// @brief Method FindAction addr 0x28a6a54 size 0x330 virtual true final true
 ::UnityEngine::InputSystem::InputAction FindAction(::StringW actionNameOrId, bool throwIfNotFound) ;

/// @brief Method FindBinding addr 0x28a7500 size 0xec virtual true final true
 int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction> action) ;

/// @brief Method FindActionMap addr 0x28a76cc size 0x1cc virtual false final false
 ::UnityEngine::InputSystem::InputActionMap FindActionMap(::StringW nameOrId, bool throwIfNotFound) ;

/// @brief Method FindActionMap addr 0x28a78e0 size 0x8c virtual false final false
 ::UnityEngine::InputSystem::InputActionMap FindActionMap(::System::Guid id) ;

/// @brief Method FindAction addr 0x28a796c size 0x7c virtual false final false
 ::UnityEngine::InputSystem::InputAction FindAction(::System::Guid guid) ;

/// @brief Method FindControlSchemeIndex addr 0x28a7a30 size 0xdc virtual false final false
 int32_t FindControlSchemeIndex(::StringW name) ;

/// @brief Method FindControlScheme addr 0x28a7b0c size 0x130 virtual false final false
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::StringW name) ;

/// @brief Method IsUsableWithDevice addr 0x28a7c3c size 0x174 virtual false final false
 bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Enable addr 0x28a7ec8 size 0x160 virtual true final true
 void Enable() ;

/// @brief Method Disable addr 0x28a8074 size 0x160 virtual true final true
 void Disable() ;

/// @brief Method Contains addr 0x28a8208 size 0x8c virtual true final true
 bool Contains(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method GetEnumerator addr 0x28a8294 size 0x68 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28a8324 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method MarkAsDirty addr 0x28a8328 size 0x4 virtual false final false
 void MarkAsDirty() ;

/// @brief Method OnWantToChangeSetup addr 0x28a832c size 0x80 virtual false final false
 void OnWantToChangeSetup() ;

/// @brief Method OnSetupChanged addr 0x28a8648 size 0x84 virtual false final false
 void OnSetupChanged() ;

/// @brief Method ReResolveIfNecessary addr 0x28a66f0 size 0x40 virtual false final false
 void ReResolveIfNecessary(bool fullResolve) ;

/// @brief Method ResolveBindingsIfNecessary addr 0x28a88a4 size 0xa0 virtual false final false
 void ResolveBindingsIfNecessary() ;

/// @brief Method OnDestroy addr 0x28a8944 size 0x28 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit InputActionAsset() ;

/// @brief Method .ctor addr 0x28a896c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionAsset, "UnityEngine.InputSystem", "InputActionAsset");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___GetEnumerator_d__31, "UnityEngine.InputSystem", "InputActionAsset/<GetEnumerator>d__31");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset___get_bindings_d__8, "UnityEngine.InputSystem", "InputActionAsset/<get_bindings>d__8");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__ReadFileJson, "UnityEngine.InputSystem", "InputActionAsset/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionAsset__WriteFileJson, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJson");
