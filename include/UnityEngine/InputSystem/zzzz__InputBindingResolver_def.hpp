#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputActionState__UnmanagedMemory;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
// Type: UnityEngine.InputSystem::InputBindingResolver
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6278))
// CS Name: UnityEngine.InputSystem.InputBindingResolver
struct CORDL_TYPE InputBindingResolver : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "totalProcessorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCompositeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalInteractionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<UnityEngine::InputSystem::InputActionMap>", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "::ArrayW<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: None }, CppParam { name: "memory", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::ArrayW<UnityEngine::InputSystem::IInputInteraction>", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::ArrayW<UnityEngine::InputSystem::InputProcessor>", modifiers: "", def_value: None }, CppParam { name: "composites", ty: "::ArrayW<UnityEngine::InputSystem::InputBindingComposite>", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty: "System::Nullable_1<UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_IsControlOnlyResolve", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Parameters", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }]
constexpr InputBindingResolver(int32_t totalProcessorCount, int32_t totalCompositeCount, int32_t totalInteractionCount, ::ArrayW<UnityEngine::InputSystem::InputActionMap> maps, ::ArrayW<UnityEngine::InputSystem::InputControl> controls, UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory memory, ::ArrayW<UnityEngine::InputSystem::IInputInteraction> interactions, ::ArrayW<UnityEngine::InputSystem::InputProcessor> processors, ::ArrayW<UnityEngine::InputSystem::InputBindingComposite> composites, System::Nullable_1<UnityEngine::InputSystem::InputBinding> bindingMask, bool m_IsControlOnlyResolve, System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters> m_Parameters) noexcept;


                    constexpr InputBindingResolver(InputBindingResolver const&) = default;
                    constexpr InputBindingResolver(InputBindingResolver&&) = default;
                    constexpr InputBindingResolver& operator=(InputBindingResolver const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputBindingResolver& operator=(InputBindingResolver&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x128};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputBindingResolver(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_totalProcessorCount, put=__set_totalProcessorCount))  totalProcessorCount;

constexpr void __set_totalProcessorCount(int32_t value) ;

constexpr int32_t __get_totalProcessorCount() const;

 int32_t __declspec(property(get=__get_totalCompositeCount, put=__set_totalCompositeCount))  totalCompositeCount;

constexpr void __set_totalCompositeCount(int32_t value) ;

constexpr int32_t __get_totalCompositeCount() const;

 int32_t __declspec(property(get=__get_totalInteractionCount, put=__set_totalInteractionCount))  totalInteractionCount;

constexpr void __set_totalInteractionCount(int32_t value) ;

constexpr int32_t __get_totalInteractionCount() const;

 ::ArrayW<UnityEngine::InputSystem::InputActionMap> __declspec(property(get=__get_maps, put=__set_maps))  maps;

constexpr void __set_maps(::ArrayW<UnityEngine::InputSystem::InputActionMap> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputActionMap> __get_maps() const;

 ::ArrayW<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_controls, put=__set_controls))  controls;

constexpr void __set_controls(::ArrayW<UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> __get_controls() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory __declspec(property(get=__get_memory, put=__set_memory))  memory;

constexpr void __set_memory(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__UnmanagedMemory __get_memory() const;

 ::ArrayW<UnityEngine::InputSystem::IInputInteraction> __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::ArrayW<UnityEngine::InputSystem::IInputInteraction> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::IInputInteraction> __get_interactions() const;

 ::ArrayW<UnityEngine::InputSystem::InputProcessor> __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::ArrayW<UnityEngine::InputSystem::InputProcessor> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputProcessor> __get_processors() const;

 ::ArrayW<UnityEngine::InputSystem::InputBindingComposite> __declspec(property(get=__get_composites, put=__set_composites))  composites;

constexpr void __set_composites(::ArrayW<UnityEngine::InputSystem::InputBindingComposite> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputBindingComposite> __get_composites() const;

 System::Nullable_1<UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_bindingMask, put=__set_bindingMask))  bindingMask;

constexpr void __set_bindingMask(System::Nullable_1<UnityEngine::InputSystem::InputBinding> value) ;

constexpr System::Nullable_1<UnityEngine::InputSystem::InputBinding> __get_bindingMask() const;

 bool __declspec(property(get=__get_m_IsControlOnlyResolve, put=__set_m_IsControlOnlyResolve))  m_IsControlOnlyResolve;

constexpr void __set_m_IsControlOnlyResolve(bool value) ;

constexpr bool __get_m_IsControlOnlyResolve() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get_m_Parameters, put=__set_m_Parameters))  m_Parameters;

constexpr void __set_m_Parameters(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::NameAndParameters> __get_m_Parameters() const;


// Properties

 int32_t __declspec(property(get=get_totalMapCount))  totalMapCount;

 int32_t __declspec(property(get=get_totalActionCount))  totalActionCount;

 int32_t __declspec(property(get=get_totalBindingCount))  totalBindingCount;

 int32_t __declspec(property(get=get_totalControlCount))  totalControlCount;


// Methods

/// @brief Method get_totalMapCount addr 0x28c4014 size 0x8 virtual false final false
 int32_t get_totalMapCount() ;

/// @brief Method get_totalActionCount addr 0x28c401c size 0x8 virtual false final false
 int32_t get_totalActionCount() ;

/// @brief Method get_totalBindingCount addr 0x28c4024 size 0x8 virtual false final false
 int32_t get_totalBindingCount() ;

/// @brief Method get_totalControlCount addr 0x28c402c size 0x8 virtual false final false
 int32_t get_totalControlCount() ;

/// @brief Method Dispose addr 0x28c4034 size 0x48 virtual true final true
 void Dispose() ;

/// @brief Method StartWithPreviousResolve addr 0x28c407c size 0xe8 virtual false final false
 void StartWithPreviousResolve(UnityEngine::InputSystem::InputActionState state, bool isFullResolve) ;

/// @brief Method AddActionMap addr 0x28c4164 size 0x1610 virtual false final false
 void AddActionMap(UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method InstantiateWithParameters addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TType>
 int32_t InstantiateWithParameters(UnityEngine::InputSystem::Utilities::TypeTable registrations, ::StringW namesAndParameters, ByRef<::ArrayW<TType>> array, ByRef<int32_t> count, UnityEngine::InputSystem::InputActionMap actionMap, ByRef<UnityEngine::InputSystem::InputBinding> binding) ;

/// @brief Method InstantiateBindingComposite addr 0x28c5774 size 0x2f4 virtual false final false
static UnityEngine::InputSystem::InputBindingComposite InstantiateBindingComposite(ByRef<UnityEngine::InputSystem::InputBinding> binding, UnityEngine::InputSystem::InputActionMap actionMap) ;

/// @brief Method ApplyParameters addr 0x28c5ca0 size 0x684 virtual false final false
static void ApplyParameters(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> parameters, ::bs_hook::Il2CppWrapperType instance, UnityEngine::InputSystem::InputActionMap actionMap, ByRef<UnityEngine::InputSystem::InputBinding> binding, ::StringW objectRegistrationName, ::StringW namesAndParameters) ;

/// @brief Method AssignCompositePartIndex addr 0x28c5a68 size 0x238 virtual false final false
static int32_t AssignCompositePartIndex(::bs_hook::Il2CppWrapperType composite, ::StringW name, ByRef<int32_t> currentCompositePartCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputBindingResolver, "UnityEngine.InputSystem", "InputBindingResolver");
