#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System::Threading {
class Thread;
}
namespace System::Threading {
struct System__Threading__ExecutionContext__Reader;
}
// Forward declare root types
namespace System::Threading {
struct ExecutionContextSwitcher;
}
// Type: System.Threading::ExecutionContextSwitcher
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2709))
// CS Name: System.Threading.ExecutionContextSwitcher
struct CORDL_TYPE ExecutionContextSwitcher : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "outerEC", ty: "System::Threading::System__Threading__ExecutionContext__Reader", modifiers: "", def_value: None }, CppParam { name: "outerECBelongsToScope", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hecsw", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "thread", ty: "System::Threading::Thread", modifiers: "", def_value: None }]
constexpr ExecutionContextSwitcher(System::Threading::System__Threading__ExecutionContext__Reader outerEC, bool outerECBelongsToScope, ::bs_hook::Il2CppWrapperType hecsw, System::Threading::Thread thread) noexcept;


                    constexpr ExecutionContextSwitcher(ExecutionContextSwitcher const&) = default;
                    constexpr ExecutionContextSwitcher(ExecutionContextSwitcher&&) = default;
                    constexpr ExecutionContextSwitcher& operator=(ExecutionContextSwitcher const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExecutionContextSwitcher& operator=(ExecutionContextSwitcher&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExecutionContextSwitcher(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::System__Threading__ExecutionContext__Reader __declspec(property(get=__get_outerEC, put=__set_outerEC))  outerEC;

constexpr void __set_outerEC(System::Threading::System__Threading__ExecutionContext__Reader value) ;

constexpr System::Threading::System__Threading__ExecutionContext__Reader __get_outerEC() const;

 bool __declspec(property(get=__get_outerECBelongsToScope, put=__set_outerECBelongsToScope))  outerECBelongsToScope;

constexpr void __set_outerECBelongsToScope(bool value) ;

constexpr bool __get_outerECBelongsToScope() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_hecsw, put=__set_hecsw))  hecsw;

constexpr void __set_hecsw(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_hecsw() const;

 System::Threading::Thread __declspec(property(get=__get_thread, put=__set_thread))  thread;

constexpr void __set_thread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get_thread() const;


// Methods

/// @brief Method UndoNoThrow addr 0x24a9754 size 0x88 virtual false final false
 bool UndoNoThrow() ;

/// @brief Method Undo addr 0x24a97dc size 0x88 virtual false final false
 void Undo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
